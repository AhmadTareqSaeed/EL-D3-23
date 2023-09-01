import os

text = \
    "\
    Hello,\n\
    this is first task\n\
    session 4\n\
    this task\n\
    code to count\n\
    number of lines\n\
    in text file\
    "

w =  open("Textfile.txt",'a')
w.writelines(text)
w.close()

f = open("Textfile.txt",'r')
count = f.readlines()

print(len(count))

os.remove("Textfile.txt")
