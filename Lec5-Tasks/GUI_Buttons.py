from tkinter import *

window = Tk()                                                              
window.title("Buttons")
window.resizable(False,False)
window.configure(background='black')
window.geometry("400x250+1700+250")

def b1():
    print("Button 1 pressed")
def b2():
    print("Button 2 pressed")
def b3():
    print("Button 3 pressed")
def b4():
    print("Button 4 pressed")

btn = Button(window,text="Button1",command=b1,fg='white',bg='grey').grid(row = 0 , column = 1 )
btn = Button(window,text="Button2",command=b2,fg='white',bg='grey').grid(row = 1 , column = 0 )
btn = Button(window,text="Button3",command=b3,fg='white',bg='grey').grid(row = 1 , column = 2 )
btn = Button(window,text="Button4",command=b4,fg='white',bg='grey').grid(row = 2 , column = 1 )

window.mainloop()

