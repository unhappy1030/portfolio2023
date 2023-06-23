import requests
import json
import datetime
import time
import yaml
import set_csv_krx

with open('C:/Users/white/Desktop/restart/python/VALAKS/config.yaml', encoding='UTF-8') as f:
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

#휴장일 조회
def check_open_mkt(date):
    """현재가 조회"""
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
    return res.json()['output'][0]['opnd_yn']

try:
    ACCESS_TOKEN = get_access_token()
    date = set_csv_krx.get_date()
    var = check_open_mkt(date)
    print(var)
except Exception as e:
    send_message(f"[오류 발생]{e}")
    time.sleep(1)