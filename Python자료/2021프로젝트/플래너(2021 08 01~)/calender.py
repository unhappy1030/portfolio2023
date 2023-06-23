from tkinter import *
import tkinter.font
import tkinter.ttk as ttk
import datetime
from tkcalendar import *
def make_top():
    global cal, year, month
    f=tkinter.font.Font(family="Noto Sans Mono CJK KR Bold", size=20, weight='bold')
    #년
    year = Entry(cal, width=5, font=f)
    now=datetime.datetime.now()
    year.insert(0, "{}".format(now.year))
    year_str = Label(cal, text="년", font = f, bg='white', fg='#262A53')
    #월
    month_value = [str(i) + "월" for i in range(1,13)]
    month = ttk.Combobox(cal, values=month_value, width=4, height=5, state="readonly", font=f)
    #선택 버튼
    choose = Button(cal, text = "선택", command=make_cal, font=f, fg='#262A53', bg='#FAAD80')
    open_pla = Button(cal, text ='.')
    #------표기---------
    year.grid(row=0, column=0, sticky=N+W+E+S)
    year_str.grid(row=0, column=1)
    month.grid(row=0, column=2, columnspan=4, sticky=N+E+W+S)
    month.set("{}월".format(now.month))
    choose.grid(row=0, column=6, columnspan=4, sticky=N+E+W+S)
    make_cal(d=int(now.day))
def make_cal(d = 1):
    global cal, year, month
    f=tkinter.font.Font(family="Noto Sans Mono CJK KR Bold", size=20, weight='bold')
    now=datetime.datetime.now()
    cal_d = Calendar(cal, selectmode="day", year=int(year.get()), month=int(month.get()[:-1]), day=d,
                     font= f,
                     bordercolor="#FDE49C", background = "#FF8474", headersbackground='#FDE49C', normalbackground='#AEE1E1', weekendbackground='#FFDCDC', selectbackground = '#BEAEE2',
                     othermonthbackground="#F9F9F9",  othermonthwebackground="#F9F9F9")
    cal_d.grid(row=1, column=0, rowspan=16, columnspan=16, sticky=N+E+W+S, ipadx=60, ipady=70)
cal = Tk()
cal.title("Planer")
cal.geometry("580x595+2300+350")
cal['bg'] = 'white'
make_top()
cal.mainloop()