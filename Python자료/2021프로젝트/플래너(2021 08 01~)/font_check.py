import tkinter as tk
window = tk.Tk()
import tkinter.font as tkFont
 
def call1():
    print("Call 1 called")
 
window.geometry('200x200')
 
frame = tk.Frame(window)
frame.pack()
 
button1 = tk.Button(frame, text ="Button 1", command = call1,
                    fg = 'blue',font ='Hack', bd = 5, bg ="light green",relief = "groove")
button1.pack(pady = 5)
 
print(list(tkFont.families()))
 
window.mainloop()