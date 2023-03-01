'''
This program is created by Tanishq Agarwal(211B326)
Lab 2 Question 9
'''
x = int(input("Enter first number: "))
y = int(input("Enter second number: "))
z = int(input("Enter third number: "))
great = 0
if x >= y:
    if x >= z:
        great = x
    else:
        great = z
else:
    if y >= z:
        great = y
    else:
        great = z
print("The greatest of", x, ",", y, ", and", z, "is", great)
