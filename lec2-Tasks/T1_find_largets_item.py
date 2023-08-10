#Find the largest item from a given list using loop

nums = [21,123,14,90,120,11]
lnum = -1
for i in nums:
    if i > lnum:
        lnum = i
print("largest number is :",lnum)

