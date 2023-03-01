Python 3.10.6 (tags/v3.10.6:9c7b4bd, Aug  1 2022, 21:53:49) [MSC v.1932 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
#reading 5 times in a list
#Method 1
list1=[None]*5
i=0
while i<5:
    a=input("Enter list item %d:"%i)
    list1[i]=a
    i=i+1
print("The list is:", list1)
SyntaxError: invalid syntax
while i<5:
    a=input("Enter list item %d:"%i)
    list1[i]=a
    i=i+1
print "The list is:", list1
SyntaxError: invalid syntax
while i<5:
    a=input("Enter list item %d:"%i)
    list1[i]=a
    i=i+1

Enter list item 0:1
Enter list item 1:2
Enter list item 2:3
Enter list item 3:4
Enter list item 4:5
print("The list:",list1)
The list: ['1', '2', '3', '4', '5']
#Method 2
list2=[]
i=0
while i<5:
    a=input("Enter list2 items %d",%i)
    
SyntaxError: invalid syntax
while i<5:
    a=input("Enter list2 items %d"%i)
    list2.append(a)
    i=i+1
print("Thelist2 is:",list2)
SyntaxError: invalid syntax
while i<5:
    a=input("Enter list2 items %d"%i)
    list2.append(a)
    i=i+1

Enter list2 items 01
Enter list2 items 12
Enter list2 items 23
Enter list2 items 34
Enter list2 items 45
print("The list 2 is:",list2)
The list 2 is: ['1', '2', '3', '4', '5']
#Method 3
list3=[]
for i in range(5):
    a=input("Enter list3 item %d"%i)
    list3.append(a)

Enter list3 item 01
Enter list3 item 123
Enter list3 item 24
Enter list3 item 35
Enter list3 item 46
print("The list of items in list3:",list3)
The list of items in list3: ['1', '23', '4', '5', '6']
#Printing list elements:
list1=[5,6,7,8,9,0]
for i in list1:
    print i
    
SyntaxError: Missing parentheses in call to 'print'. Did you mean print(...)?
for i in list1:
    print(i)

5
6
7
8
9
0
list_of_airlines=["AI","EN","BA"]
print("Iterating the list using keyword in:")
Iterating the list using keyword in:
for airline in list_of_airlines:
    print(airline)

AI
EN
BA
print("Iterating the list using range()")
Iterating the list using range()
for index in range(len(list_of_aielines)):
    
KeyboardInterrupt
for index in range(len(list_of_airlines)):
    print(list_of_airlines[index])

AI
EN
BA
