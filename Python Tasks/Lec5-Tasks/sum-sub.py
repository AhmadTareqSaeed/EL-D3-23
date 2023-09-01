from tkinter import *

window = Tk()
window.title("Calculator")
window.geometry("800x300+1700+250")
window.resizable(False,False)
Label(window,text = 'Val1:').grid(row=0,column=0)
Label(window,text = 'Val2:').grid(row=1,column=0)

e1 = Entry(window)
e2 = Entry(window)
e1.grid(row=0,column=1)
e2.grid(row=1,column=1)

def cal():
    n = float(e1.get())
    m = float(e2.get())
    global v 
    a = v.get()
    if a == True :
        Label(window,text = n+m).grid(row= 2,column=1)
    elif a == False:
        Label(window,text = n-m).grid(row= 2,column=1)

v = IntVar()

def res():
    Label(window,text = '               ').grid(row= 2,column=1)

Radiobutton(window,text='sum',variable=v,value=True).grid(row =4 , column = 0)
Radiobutton(window,text='sub',variable=v,value=False).grid(row =5 , column = 0)
Button(window,text='cal',command=cal).grid(row =3 , column = 1)
Button(window,text='reset',command=res).grid(row =6 , column = 1)

window.mainloop()
