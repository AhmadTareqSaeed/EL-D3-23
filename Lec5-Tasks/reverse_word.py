from tkinter import *

def Reverse():
    
    word = e1.get()
    word = reverse(word)
    Label(window, text=word).grid(row = 1,column=1)

def reverse(word):
  return word[::-1]

window = Tk()                                                              
window.title("Reverse")
window.resizable(False,False)
window.configure(background='black')
window.geometry("800x600+1700+250")

Label(window, text="Enter sentence: ").grid(row = 0)
Label(window, text="Output: ").grid(row = 1)

e1 = Entry(window)

e1.grid(row = 0, column = 1  )

Btn= Button(window,text='Reverse',command=Reverse).grid(row = 3 , column= 1)

def clear_entry():
    e1.delete(0,'end')

Btn = Button(window,text='Reset',command=clear_entry).grid(row = 4 , column= 1)

window.mainloop()
