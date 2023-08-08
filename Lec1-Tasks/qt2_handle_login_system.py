#!/usr/bin/python3

users = [['Ahmad',1394],['Ali',6078],['Amr',9345]]
         
username = input("Please Enter a username: ")
password = int(input("Please Enter a password: "))

for i in users :
    if username == i[0]:
        if password == i[1]:
            print("Welcom ,"+username)
        else:
            print("Incorrect entry")