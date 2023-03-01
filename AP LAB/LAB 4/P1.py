Python 3.10.6 (tags/v3.10.6:9c7b4bd, Aug  1 2022, 21:53:49) [MSC v.1932 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
tup1=(5,10,15,20,25)
print(len(tup1))
5
print(tup1[4])
25
print(tup1[5])
Traceback (most recent call last):
  File "<pyshell#3>", line 1, in <module>
    print(tup1[5])
IndexError: tuple index out of range
print(tup1[4:5])
(25,)

tup1[2]=12
Traceback (most recent call last):
  File "<pyshell#5>", line 1, in <module>
    tup1[2]=12
TypeError: 'tuple' object does not support item assignment
print(tup1)
(5, 10, 15, 20, 25)
tup1=tup1+(8,9)
print(tup1)
(5, 10, 15, 20, 25, 8, 9)
