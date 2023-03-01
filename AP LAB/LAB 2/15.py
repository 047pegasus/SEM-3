'''
This program is created by Tanishq Agarwal(211B326)
Lab 2 Question 15
'''
num = int(input("Enter a five digit number: "))
ans = 0
counter = 0
while (num > 0):
    x = num % 10
    num = num // 10
    if x == 9:
        x = 0
    else:
        x += 1
    ans = ans + (x * (10 ** counter))
    counter += 1

print("The answer is:", ans)
