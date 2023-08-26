import webbrowser
import pyautogui
import time

webbrowser.open('https://mail.google.com/mail/u/0/#inbox')
time.sleep(3)
pyautogui.moveTo(x = 1336 , y = 283)
time.sleep(1)
pyautogui.click()
time.sleep(1)
pyautogui.write('label:unread ')
time.sleep(3)
pyautogui.press('enter')
time.sleep(2)
pyautogui.moveTo(x = 740 , y = 516)
time.sleep(0.5)
pyautogui.click()
time.sleep(0.5)
pyautogui.moveTo(x = 1157 , y = 517)
time.sleep(0.5)
pyautogui.click()
