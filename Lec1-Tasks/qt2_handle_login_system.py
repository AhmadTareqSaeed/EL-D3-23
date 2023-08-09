#!/usr/bin/python3

users = {'Ahmad': '1394', 'Ali': '6078', 'Amr': '9345'}  
   
username = input("Please Enter a username: ")  
password = input("Please Enter a password: ")  
  
if username in users and users[username] == password:  
    print("Welcom ,"+username)  
else:  
    print("Incorrect entry") 
