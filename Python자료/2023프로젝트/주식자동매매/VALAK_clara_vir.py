import requests
import json
import datetime
import time
import yaml
import set_csv_krx

with open('C:/Users/white/Desktop/restart/python/VALAKS/config_v.yaml', encoding='UTF-8') as f:
    _cfg = yaml.load(f, Loader=yaml.FullLoader)
APP_KEY = _cfg['APP_KEY']
APP_SECRET = _cfg['APP_SECRET']
ACCESS_TOKEN = ""
CANO = _cfg['CANO']
ACNT_PRDT_CD = _cfg['ACNT_PRDT_CD']
DISCORD_WEBHOOK_URL = _cfg['DISCORD_WEBHOOK_URL']
URL_BASE = _cfg['URL_BASE']
#디스코드 웹훅 및 기초 토큰 발급
def send_message(msg):
    """디스코드 메세지 전송"""
    now = datetime.datetime.now()
    message = {"content": f"[{now.strftime('%Y-%m-%d %H:%M:%S')}] {str(msg)}"}
    requests.post(DISCORD_WEBHOOK_URL, data=message)
    print(message)
def get_access_token():
    """토큰 발급"""
    headers = {"content-type":"application/json"}
    body = {"grant_type":"client_credentials",
    "appkey":APP_KEY, 
    "appsecret":APP_SECRET}
    PATH = "oauth2/tokenP"
    URL = f"{URL_BASE}/{PATH}"
    res = requests.post(URL, headers=headers, data=json.dumps(body))
    ACCESS_TOKEN = res.json()["access_token"]
    return ACCESS_TOKEN
def hashkey(datas):
    """암호화"""
    PATH = "uapi/hashkey"
    URL = f"{URL_BASE}/{PATH}"
    headers = {
    'content-Type' : 'application/json',
    'appKey' : APP_KEY,
    'appSecret' : APP_SECRET,
    }
    res = requests.post(URL, headers=headers, data=json.dumps(datas))
    hashkey = res.json()["HASH"]
    return hashkey
#_______________________________________________________________________

def get_current_price(code="005930"):
    """현재가 조회"""
    PATH = "uapi/domestic-stock/v1/quotations/inquire-price"
    URL = f"{URL_BASE}/{PATH}"
    headers = {"Content-Type":"application/json;charset=utf-8", 
            "authorization": f"Bearer {ACCESS_TOKEN}",
            "appKey":APP_KEY,
            "appSecret":APP_SECRET,
            "tr_id":"FHKST01010100"}
    params = {
    "fid_cond_mrkt_div_code":"J",
    "fid_input_iscd":code,
    }
    res = requests.get(URL, headers=headers, params=params)
    output_dict = res.json()['output']
    return int(output_dict['stck_prpr']), int(output_dict['acml_vol'])
def minute_vol(code="005930"):
    """분당 거래량 조회"""
    t_now = datetime.datetime.now()
    min = t_now.strftime("%H").zfill(2) + str(int(t_now.strftime("%M"))-1).zfill(2) + "00"
    PATH = "uapi/domestic-stock/v1/quotations/inquire-time-itemchartprice"
    URL = f"{URL_BASE}/{PATH}"
    headers = {"Content-Type":"application/json;charset=utf-8", 
            "authorization": f"Bearer {ACCESS_TOKEN}",
            "appKey":APP_KEY,
            "appSecret":APP_SECRET,
            "tr_id":"FHKST03010200"}
    params = {
    "fid_etc_cls_code" : "",
    "fid_cond_mrkt_div_code":"J",
    "fid_input_iscd":code,
    "fid_input_hour_1":min,
    "fid_pw_data_incu_yn":"N",
    }
    res = requests.get(URL, headers=headers, params=params)
    output_list = res.json()['output2']
    return int(output_list[0]['cntg_vol'])

def get_asking_price_rt(code="005930"):
    PATH = "uapi/domestic-stock/v1/quotations/inquire-asking-price-exp-ccn"
    URL = f"{URL_BASE}/{PATH}"
    headers = {"Content-Type":"application/json; charset=utf-8", 
            "authorization": f"Bearer {ACCESS_TOKEN}",
            "appKey":APP_KEY,
            "appSecret":APP_SECRET,
            "tr_id":"FHKST01010200"}
    params = {
    "fid_cond_mrkt_div_code":"J",
    "fid_input_iscd":code,
    }
    res = requests.get(URL, headers=headers, params=params)
    output_dict = res.json()['output1']
    sum_a = 0
    sum_b = 0
    for i in range(1,5):
        a_str_idx = "askp_rsqn" + str(i)#매도호가 잔량
        b_str_idx = "bidp_rsqn" + str(i)#매수호가 잔량
        sum_a += int(output_dict[a_str_idx])
        sum_b += int(output_dict[b_str_idx])
    rt = float(sum_a) / float(sum_b)
    a_ti = float(output_dict['total_askp_rsqn_icdc'])
    b_ti = float(output_dict['total_bidp_rsqn_icdc'])
    return [rt, a_ti, b_ti]
def get_rt_dic():
    """주식 잔고 평가 손익율 조회"""
    PATH = "uapi/domestic-stock/v1/trading/inquire-balance"
    URL = f"{URL_BASE}/{PATH}"
    headers = {"Content-Type":"application/json", 
        "authorization":f"Bearer {ACCESS_TOKEN}",
        "appKey":APP_KEY,
        "appSecret":APP_SECRET,
        "tr_id":"VTTC8434R",
        "custtype":"P",
    }
    params = {
        "CANO": CANO,
        "ACNT_PRDT_CD": ACNT_PRDT_CD,
        "AFHR_FLPR_YN": "N",
        "OFL_YN": "",
        "INQR_DVSN": "02",
        "UNPR_DVSN": "01",
        "FUND_STTL_ICLD_YN": "N",
        "FNCG_AMT_AUTO_RDPT_YN": "N",
        "PRCS_DVSN": "01",
        "CTX_AREA_FK100": "",
        "CTX_AREA_NK100": ""
    }
    res = requests.get(URL, headers=headers, params=params)
    stock_list = res.json()['output1']
    stock_dict = {}
    for stock in stock_list:
        if int(stock['hldg_qty']) > 0:
            stock_dict[stock['pdno']] = stock['evlu_pfls_rt']
    return stock_dict

#_______________________________________________________________________

def get_stock_dic():
    """주식 잔고조회"""
    PATH = "uapi/domestic-stock/v1/trading/inquire-balance"
    URL = f"{URL_BASE}/{PATH}"
    headers = {"Content-Type":"application/json", 
        "authorization":f"Bearer {ACCESS_TOKEN}",
        "appKey":APP_KEY,
        "appSecret":APP_SECRET,
        "tr_id":"VTTC8434R",
        "custtype":"P",
    }
    params = {
        "CANO": CANO,
        "ACNT_PRDT_CD": ACNT_PRDT_CD,
        "AFHR_FLPR_YN": "N",
        "OFL_YN": "",
        "INQR_DVSN": "02",
        "UNPR_DVSN": "01",
        "FUND_STTL_ICLD_YN": "N",
        "FNCG_AMT_AUTO_RDPT_YN": "N",
        "PRCS_DVSN": "01",
        "CTX_AREA_FK100": "",
        "CTX_AREA_NK100": ""
    }
    res = requests.get(URL, headers=headers, params=params)
    stock_list = res.json()['output1']
    stock_dict = {}
    for stock in stock_list:
        if int(stock['hldg_qty']) > 0:
            stock_dict[stock['pdno']] = stock['hldg_qty']
    return stock_dict
def get_stock_balance():
    """주식 잔고조회"""
    PATH = "uapi/domestic-stock/v1/trading/inquire-balance"
    URL = f"{URL_BASE}/{PATH}"
    headers = {"Content-Type":"application/json", 
        "authorization":f"Bearer {ACCESS_TOKEN}",
        "appKey":APP_KEY,
        "appSecret":APP_SECRET,
        "tr_id":"VTTC8434R",
        "custtype":"P",
    }
    params = {
        "CANO": CANO,
        "ACNT_PRDT_CD": ACNT_PRDT_CD,
        "AFHR_FLPR_YN": "N",
        "OFL_YN": "",
        "INQR_DVSN": "02",
        "UNPR_DVSN": "01",
        "FUND_STTL_ICLD_YN": "N",
        "FNCG_AMT_AUTO_RDPT_YN": "N",
        "PRCS_DVSN": "01",
        "CTX_AREA_FK100": "",
        "CTX_AREA_NK100": ""
    }
    res = requests.get(URL, headers=headers, params=params)
    stock_list = res.json()['output1']
    evaluation = res.json()['output2']
    stock_dict = {}
    send_message(f"====주식 보유잔고====")
    for stock in stock_list:
        if int(stock['hldg_qty']) > 0:
            stock_dict[stock['pdno']] = stock['hldg_qty']
            send_message(f"{stock['prdt_name']}({stock['pdno']}): {stock['hldg_qty']}주\n\t평가 손익 금액 : {stock['evlu_pfls_amt']}\n\t 평가 손익율 : {stock['evlu_pfls_rt']}")
            time.sleep(0.3)
    send_message(f"주식 평가 금액: {evaluation[0]['scts_evlu_amt']}원")
    time.sleep(0.3)
    send_message(f"평가 손익 합계: {evaluation[0]['evlu_pfls_smtl_amt']}원")
    time.sleep(0.3)
    send_message(f"총 평가 금액: {evaluation[0]['tot_evlu_amt']}원")
    time.sleep(0.3)
    send_message(f"=================")
    return stock_dict
def get_balance():
    """현금 잔고조회"""
    PATH = "uapi/domestic-stock/v1/trading/inquire-psbl-order"
    URL = f"{URL_BASE}/{PATH}"
    headers = {"Content-Type":"application/json", 
        "authorization":f"Bearer {ACCESS_TOKEN}",
        "appKey":APP_KEY,
        "appSecret":APP_SECRET,
        "tr_id":"VTTC8908R",
        "custtype":"P",
    }
    params = {
        "CANO": CANO,
        "ACNT_PRDT_CD": ACNT_PRDT_CD,
        "PDNO": "005930",
        "ORD_UNPR": "65500",
        "ORD_DVSN": "01",
        "CMA_EVLU_AMT_ICLD_YN": "Y",
        "OVRS_ICLD_YN": "Y"
    }
    res = requests.get(URL, headers=headers, params=params)
    cash = res.json()['output']['ord_psbl_cash']
    send_message(f"주문 가능 현금 잔고: {cash}원")
    return int(cash)
def get_total_amount():
    """총 평가 금액 조회"""
    PATH = "uapi/domestic-stock/v1/trading/inquire-balance"
    URL = f"{URL_BASE}/{PATH}"
    headers = {"Content-Type":"application/json", 
        "authorization":f"Bearer {ACCESS_TOKEN}",
        "appKey":APP_KEY,
        "appSecret":APP_SECRET,
        "tr_id":"VTTC8434R",
        "custtype":"P",
    }
    params = {
        "CANO": CANO,
        "ACNT_PRDT_CD": ACNT_PRDT_CD,
        "AFHR_FLPR_YN": "N",
        "OFL_YN": "",
        "INQR_DVSN": "02",
        "UNPR_DVSN": "01",
        "FUND_STTL_ICLD_YN": "N",
        "FNCG_AMT_AUTO_RDPT_YN": "N",
        "PRCS_DVSN": "01",
        "CTX_AREA_FK100": "",
        "CTX_AREA_NK100": ""
    }
    res = requests.get(URL, headers=headers, params=params)
    evaluation = res.json()['output2'][0]['tot_evlu_amt']
    return int(evaluation)
#매도,매수
def buy(code="005930", qty="1"):
    """주식 시장가 매수"""  
    PATH = "uapi/domestic-stock/v1/trading/order-cash"
    URL = f"{URL_BASE}/{PATH}"
    data = {
        "CANO": CANO,
        "ACNT_PRDT_CD": ACNT_PRDT_CD,
        "PDNO": code,
        "ORD_DVSN": "01",
        "ORD_QTY": str(int(qty)),
        "ORD_UNPR": "0",
    }
    headers = {"Content-Type":"application/json", 
        "authorization":f"Bearer {ACCESS_TOKEN}",
        "appKey":APP_KEY,
        "appSecret":APP_SECRET,
        "tr_id":"TTTC0802U",
        "custtype":"P",
        "hashkey" : hashkey(data)
    }
    res = requests.post(URL, headers=headers, data=json.dumps(data))
    if res.json()['rt_cd'] == '0':
        send_message(f"[매수 성공]{str(res.json())}")
        return True
    else:
        send_message(f"[매수 실패]{str(res.json())}")
        return False
def sell(code="005930", qty="1"):
    """주식 시장가 매도"""
    PATH = "uapi/domestic-stock/v1/trading/order-cash"
    URL = f"{URL_BASE}/{PATH}"
    data = {
        "CANO": CANO,
        "ACNT_PRDT_CD": ACNT_PRDT_CD,
        "PDNO": code,
        "ORD_DVSN": "01",
        "ORD_QTY": qty,
        "ORD_UNPR": "0",
    }
    headers = {"Content-Type":"application/json", 
        "authorization":f"Bearer {ACCESS_TOKEN}",
        "appKey":APP_KEY,
        "appSecret":APP_SECRET,
        "tr_id":"TTTC0801U",
        "custtype":"P",
        "hashkey" : hashkey(data)
    }
    res = requests.post(URL, headers=headers, data=json.dumps(data))
    if res.json()['rt_cd'] == '0':
        send_message(f"[매도 성공]{str(res.json())}")
        return True
    else:
        send_message(f"[매도 실패]{str(res.json())}")
        return False

#시간 설정
def get_time_dic():
    t_dic = {}
    t = datetime.datetime.now()
    t_dic['9'] = t.replace(hour=9, minute=0, second=0, microsecond=0)
    t_dic['start'] = t.replace(hour=9, minute=5, second=0, microsecond=0)
    t_dic['sell'] = t.replace(hour=15, minute=15, second=0, microsecond=0)
    t_dic['exit'] = t.replace(hour=15, minute=20, second=0,microsecond=0)
    t_dic['today'] = datetime.datetime.today().weekday()
    return t_dic
#휴장일 조회
def check_open_mkt(date):
    """휴장일 조회"""
    PATH = "uapi/domestic-stock/v1/quotations/chk-holiday"
    URL = f"{URL_BASE}/{PATH}"
    headers = {"Content-Type":"application/json;charset=utf-8", 
            "authorization": f"Bearer {ACCESS_TOKEN}",
            "appKey":APP_KEY,
            "appSecret":APP_SECRET,
            "tr_id":"CTCA0903R",
            "custtype":"P",
            }
    params = {
    "BASS_DT":date,
    "CTX_AREA_NK":"",
    "CTX_AREA_FK":""
    }
    res = requests.get(URL, headers=headers, params=params)
    return res.json()['output'][0]['opnd_yn'], int(res.json()['output'][0]['wday_dvsn_cd'])
try:
    #목표 웹 소켓 최소화 : 이유 프로그램 작동 속도 향상
    ACCESS_TOKEN = get_access_token()
    symbol_list = [] # 매수 희망 종목 리스트
    total_cash = get_balance() # 보유 현금 조회
    stock_dict = get_stock_balance() # 보유 주식 조회
    total_amount = get_total_amount()
    first_amount = total_amount
    bought_list = list(stock_dict.keys())
    target_buy_count = 2 # 매수할 종목 수
    buy_percent = 0.45 # 종목당 매수 금액 비율
    buy_amount = total_cash * buy_percent  # 종목별 주문 금액 계산
    #장 시작전 잔여수량 매도 여부 선택 파트 
    soldout = False
    if len(bought_list) < 1:
        soldout = True    
    send_message("Korea_invest_program<__VALAK__>_START")
    #솔로몬의 72악마 중 보물을 찾는 악마 <발락>에서 유래
#________한 번 쓸 시간 값들_______________________________________________________
    time_dic = get_time_dic()
    date = set_csv_krx.get_date()
#_________________________________________________________________________________
    if time_dic['today'] == 5 or time_dic['today'] == 6:  # 토요일이나 일요일이면 자동 종료
            send_message("주말이므로 프로그램을 종료합니다.")
    else:
        if soldout == False:#잔여 수량 매도
            for sym, qty in stock_dict.items():
                sell(sym, qty)
                soldout == True
                bought_list = []
                stock_dict = get_stock_dic()
                total_cash = get_balance()
                buy_amount = total_cash * buy_percent
        while True:
            t_now = datetime.datetime.now()#현재 시간
            #if time_dic['9'] < t_now < time_dic['start'] and soldout == False: # 잔여 수량 매도
            if time_dic['start'] < t_now < time_dic['sell'] :  # AM 09:05 ~ PM 03:15 : 매수
                #5종목 트레킹
                try:
                    if len(symbol_list) < 1:#첫 종목 리스트 조회
                        symbol_list = set_csv_krx.set_dataframe_rate(date)
                        send_message("__Seting Target Symbol__")
                        time.sleep(15)
                    elif len(bought_list) < target_buy_count:       #매수 파트
                        for sym in symbol_list:
                            if sym in bought_list:
                                continue
                            current_price, day_volume = get_current_price(sym)
                            minutes = t_now - time_dic['9']
                            minutes = int(minutes.total_seconds()) // 60
                            avg_vol = day_volume / float(minutes)
                            min_vol = minute_vol(sym)
                            if min_vol > avg_vol:
                                send_message(f"{min_vol} > {avg_vol} 값 체크")
                                rt = get_asking_price_rt(sym)
                                if rt[0] < 0.5 and rt[1] < 0 and rt[2] > 0 and rt[1] * -1 > rt[2]:
                                    buy_qty = 0  # 매수할 수량 초기화
                                    buy_qty = int(buy_amount // current_price) #매수할 수량 체크 오케이
                                    if buy_qty > 0:
                                        result = buy(sym, buy_qty)
                                        send_message(f"{sym} 매수 시도")
                                        if result:
                                            soldout = False
                                            bought_list.append(sym)
                                        elif result==False:
                                            symbol_list.remove(sym)
                            time.sleep(0.5)
                    if soldout == False:                            #매도 파트
                        stock_dict=get_stock_dic()
                        for sym in stock_dict.keys():
                            rt_dict = get_rt_dic()
                            r = float(rt_dict[sym])
                            if r >= 1.2:
                                sell(sym, stock_dict[sym])
                                send_message("1.2%이상 익절했습니다.ㅋㅋ")
                                bought_list.remove(sym)
                                if len(bought_list) == 0:
                                    soldout = True    
                                    total_cash = get_balance()
                                    buy_amount = total_cash * buy_percent
                            elif r <= -2:
                                sell(sym, stock_dict[sym])
                                send_message("2%이하 손절했습니다.ㅠㅠ")
                                bought_list.remove(sym)
                                if len(bought_list) == 0:
                                    soldout = True
                                    total_cash = get_balance()
                                    buy_amount = total_cash * buy_percent
                                    total_amount = get_total_amount()
                            time.sleep(0.5)
                except Exception as e:
                    send_message(f"[오류 발생]{e}")
                    time.sleep(1)
                if t_now.minute % 15 == 0 and t_now.second <= 10:#30분에 한번씩 리스트 초기화
                    symbol_list = set_csv_krx.set_dataframe_rate(date)
                    send_message("__Seting Target Symbol__ --(TERM : 30min)")
                    get_stock_balance()
                    total_amount = get_total_amount()
                    send_message(f"{total_amount-first_amount} 현재 매매 손익")
                    time.sleep(5)
            if time_dic['sell'] < t_now < time_dic['exit']:  # PM 03:15 ~ PM 03:20 : 일괄 매도
                if soldout == False:
                    stock_dict = get_stock_dic()
                    for sym, qty in stock_dict.items():
                        sell(sym, qty)
                    soldout = True
                    bought_list = []
                    time.sleep(1)
            if time_dic['exit'] < t_now:  # PM 03:20 ~ :프로그램 종료
                send_message("프로그램을 종료합니다.")
                break
except Exception as e:
    send_message(f"[오류 발생]{e}")
    time.sleep(1)