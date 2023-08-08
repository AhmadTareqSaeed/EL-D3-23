#!/usr/bin/python3

# Write a Python program to test whether a passed letter is a vowel or not.

vowels = ['a','e','i','o','u','A','E','I','O','U']

letter = input("Please enter your letter : ")

if letter in vowels:
    print("Pass")
else:
    print("Fail")
