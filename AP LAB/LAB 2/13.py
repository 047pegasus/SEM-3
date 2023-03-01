'''
This program is created by Tanishq Agarwal(211B326)
Lab 2 Question 13
'''
amount = int(input("Enter total amount withdrawn: "))
hundred = amount // 100
fifty = (amount % 100) // 50
tens = ((amount % 100) % 50) // 10
print("Total no. of notes required are:", hundred + fifty + tens)
