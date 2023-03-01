'''
This program is created by Tanishq Agarwal(211B326)
Lab 2 Question 6
'''
sub_1 = int(input("Enter the value of marks for subject 1:"))
sub_2 = int(input("Enter the value of marks for subject 2:"))
sub_3 = int(input("Enter the value of marks for subject 3:"))
sub_4 = int(input("Enter the value of marks for subject 4:"))
sub_5 = int(input("Enter the value of marks for subject 5:"))
sub_6 = int(input("Enter the value of marks for subject 6:"))
sub_sum = sub_1 + sub_2 + sub_3 + sub_4 + sub_5 + sub_6
perc = (sub_sum / 600) * 100
print("The sum of the marks alloted for the subjects is:", sub_sum, "and the percentage is: ", perc)
