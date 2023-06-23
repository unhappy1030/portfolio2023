from pykrx import stock
import pandas as pd
import datetime
import time

def minus_day(sourceDate, count):#예비용 날짜 더하기 빼기 형태
    targetDate = sourceDate - datetime.timedelta(days = count)
    return targetDate

def get_date():#날짜 데이터 가공
    t_now = datetime.datetime.now()
    today = datetime.datetime.today().weekday()
    m = str(t_now.month)
    d = str(t_now.day)
    if len(m) < 2:
        m = "0" + m
    if len(d) < 2:
        d = "0" + d
    return str(t_now.year) + m + d

def set_dataframe_rate(date):
    #주식 코드,거래량(일),등락률 추출
    df = stock.get_market_ohlcv_by_ticker(date=date, market="ALL").loc[:,['거래량','등락률']]
    df = df.sort_values(by='등락률' ,ascending=False)[:50]
    df = df.sort_values(by='거래량' ,ascending=False)[:30]
    print(df)
    ticker=df.index.tolist()
    rate = df["등락률"].values.tolist()
    code_list = []
    i = 0
    idx = 0
    while i != 5:#종목 갯수
        if idx >= 30:
            i+=1
            continue
        if 5 <= float(rate[idx]) <= 25:
            code_list.append(ticker[idx])
            i+=1
        idx+=1
    return code_list



if __name__ == "__main__":#테스트 코드
    date = get_date()
    print(date)
    date = "20230504"
    code = set_dataframe_rate(date)
    print("len : ", len(code))
    print("code : ", code)