'''
This program is created by Tanishq Agarwal(211B326)
Lab 2 Question 16
'''
counter = 0
ans = 0
while (counter < 10):
    x = int(input("Enter an integer: "))
    if ((x % 2 != 0) and (x > ans)) or (counter == 0):
        ans = x
    counter += 1

print("The answer is:", ans)
