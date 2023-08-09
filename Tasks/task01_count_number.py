#!/usr/bin/python3

#python program to count the number 4 in a given list .

numbers = [1,2,3,4,5,4,5,4,5,7,4,6,4,9,4]
n = 0 
for i in range(0,len(numbers))  : 
    if numbers[i] == 4 :
        n+=1

print(n) 
