import os
from essential_generators import DocumentGenerator

text = DocumentGenerator()

text = text.paragraph()

w = open("paragraph.txt",'a') 
w.writelines(text)
w.close()

f = open("paragraph.txt",'r')
count = f.read()

print(len(count))
