from tkinter import *


def led_on():
    win.itemconfig(circle,fill = 'red')
    Label(window, text="Led On").grid(row = 3,column=1)

def led_off():
    win.itemconfig(circle,fill = 'white')
    Label(window, text="Led off").grid(row = 3,column=1)


canvas_width = 600
canvas_height = 600
window = Tk()
window.title("Led")
win = Canvas(window, width=canvas_width, height=canvas_height,background='white')
win.pack()
win.grid(row=2, column=1)

cord = 50 , 50 , 350 , 350

circle = win.create_oval(cord)

btn1 = Button(window,text = 'on' , command = led_on).grid(row = 4 , column= 1)
btn2 = Button(window,text = 'off' , command = led_off).grid(row = 5 , column= 1)


window.mainloop()
