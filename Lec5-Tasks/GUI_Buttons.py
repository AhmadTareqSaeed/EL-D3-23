from tkinter import *

window = Tk()                                                              
window.title("Buttons")
window.resizable(False,False)
window.configure(background='black')
window.geometry("330x115+1700+250")

Label(window,text="Button1",fg='white',bg='grey').grid(row = 0 , column = 1 )
Label(window,text="Button2",fg='white',bg='grey').grid(row = 1 , column = 0 )
Label(window,text="Button3",fg='white',bg='grey').grid(row = 1 , column = 2 )
Label(window,text="Button4",fg='white',bg='grey').grid(row = 2 , column = 1 )

window.mainloop()

