import pyautogui
import time

pyautogui.hotkey('win')
time.sleep(1.5)
pyautogui.write('term')
time.sleep(1.5)
pyautogui.press('enter')
time.sleep(1.5)
pyautogui.write('code .')
time.sleep(1.5)
pyautogui.press('enter')
time.sleep(1.5)

pyautogui.hotkey('ctrl','shift','x')
time.sleep(1.5)
pyautogui.write('clangd')
time.sleep(2)

pyautogui.click(x=650, y=474)
time.sleep(2)
pyautogui.click(x=1394, y=570)
time.sleep(2)
pyautogui.doubleClick(x=737, y=371)
time.sleep(2)

pyautogui.press('backspace')
###############################################

time.sleep(2)
pyautogui.write('testmate')
time.sleep(2)

pyautogui.click(x=650, y=474)
time.sleep(2)
pyautogui.click(x=1394, y=570)
time.sleep(2)

pyautogui.doubleClick(x=737, y=371)
time.sleep(2)
pyautogui.press('backspace')
###############################################

time.sleep(2)
pyautogui.write('cmake')
time.sleep(2)

pyautogui.click(x=650, y=474)
time.sleep(2)
pyautogui.click(x=1394, y=570)
time.sleep(2)

pyautogui.click(x=665, y=600)
time.sleep(2)
pyautogui.click(x=1394, y=570)
time.sleep(2)

pyautogui.doubleClick(x=737, y=371)
time.sleep(2)
###############################################

time.sleep(2)
pyautogui.write('c++ helper')
time.sleep(2)

pyautogui.click(x=650, y=474)
time.sleep(2)
pyautogui.click(x=1394, y=570)
time.sleep(2)

pyautogui.tripleClick(x=737, y=371)
time.sleep(2)
pyautogui.press('backspace')
##############################################


pyautogui.hotkey('ctrl','w')
