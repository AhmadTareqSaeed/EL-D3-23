from tkinter import *
import math

def sum():
    num = int(e1.get())
    fact = math.factorial(num)
    Label(window, text=f"Factorial of {num} is {fact}").grid(row = 3,column=1)
    
def res():
    Label(window, text=f"                                 ").grid(row = 3,column=1)
    

window = Tk()
window.geometry('600x600')
Label(window,text="Enter Number: ").grid(row=0)
e1 = Entry(window)
e1.grid(row=0,column=1)
Button(window,text='sum',command=sum).grid(row= 4,column=1)
Button(window,text='res',command=res).grid(row= 5,column=1)

window.mainloop()
