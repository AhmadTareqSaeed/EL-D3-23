#!/usr/bin/python3

#Print the calendar of a given month and year

import calendar

y = int(input("Input the year  : "))
m = int(input("Input the month : "))

print(calendar.month(y,m))