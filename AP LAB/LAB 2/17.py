'''
This program is created by Tanishq Agarwal(211B326)
Lab 2 Question 17
'''

a = int(input('Enter the number whose integral cube root is to be calculated:'))
cube = a ** (1 / 3)
print(cube)
b = int(cube)
if cube == b:
    print('Entered digit is a perfect cube root number!')
else:
    print('Entered digit is not a perfect cube root number!')
