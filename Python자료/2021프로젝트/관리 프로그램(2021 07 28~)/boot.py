import tkinter.messagebox as mb
from tkinter import*
import numpy as np
import pandas as pd
import datetime
check = 0
def sav():
    global check
    try :
        global root
        date=pd.Series(np.array(e.get(),dtype=np.datetime64))
        root.quit()
        check=1
    except:
        check=0
        mb.showinfo("알림", "입력 형식이 잘못되었습니다.")
def today():
    now=datetime.datetime.now()
    e.insert(0 , "{}-{:02d}-{:02d}".format(now.year, now.month, now.day))
def show():
    global label, btn1, btn2, e
    label=Label(root, text="체중 측정 시각을 입력해주세요")
    btn1 = Button(root, text="오늘 날짜", command=today)
    btn2 = Button(root, text="입력", command=sav)
    e= Entry(root, width=30)
    #버튼 및 엔트리 위치 조정 부분
    label.pack(side='top')
    btn1.pack(pady=20)
    e.pack(side='left')
    btn2.pack(side='right', padx= 30)
#시작 부분
root = Tk()
root.title("Input Data Window")
root.geometry("320x120+2300+350")
show()
root.mainloop()