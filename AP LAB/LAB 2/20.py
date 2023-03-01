'''
This program is created by Tanishq Agarwal(211B326)
Lab 2 Question 20
'''

a = int(input('Input number 1:'))
b = int(input('Input number 2:'))
if a == 0 or b == 0:
    print("GCD of a and b is : 0")
elif a == b:
    print("GCD of a and b is :", a)
else:
    if a < b:
        n = b
    else:
        n = a
    while n > 0:
        if a % n == 0 and b % n == 0:
            print("GCD of a and b is:", n)
            n = n - 1
        n = n - 1
