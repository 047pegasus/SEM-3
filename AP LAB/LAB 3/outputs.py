Python 3.10.6 (tags/v3.10.6:9c7b4bd, Aug  1 2022, 21:53:49) [MSC v.1932 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.

================== RESTART: N:/AP LAB/LAB 3/1.py ==================
simp_int()
Enter the principle amount:120000
Enter the rate of interest of the loan:7
Enter the time required to repay the loan4
The simple interest of the given data is: 33600.0

================== RESTART: N:/AP LAB/LAB 3/2.py ==================
area_tri()
Enter the base of the triangle:11
Enter the height of the triangle:16
The area of the triangle is:  88.0

================== RESTART: N:/AP LAB/LAB 3/3.py ==================
comp_int()
Enter the principle amount:12000
Enter the rate of interest of the loan:7.5
Enter the time required to repay the loan:4
No of times amount is compounded per time period:2
Traceback (most recent call last):
  File "<pyshell#2>", line 1, in <module>
    comp_int()
  File "N:/AP LAB/LAB 3/3.py", line 6, in comp_int
    ci=(p*((1+(r/n))^nt))-p
NameError: name 'nt' is not defined. Did you mean: 't'?

================== RESTART: N:/AP LAB/LAB 3/3.py ==================

comp_int()
Enter the principle amount:12000
Enter the rate of interest of the loan:7.5
Enter the time required to repay the loan:4
No of times amount is compounded per time period:2
Traceback (most recent call last):
  File "<pyshell#4>", line 1, in <module>
    comp_int()
  File "N:/AP LAB/LAB 3/3.py", line 6, in comp_int
    ci=(p*((1+(r/n))^(n*t)))-p
TypeError: unsupported operand type(s) for ^: 'float' and 'int'

================== RESTART: N:/AP LAB/LAB 3/3.py ==================
comp_int()
Enter the principle amount:12000
Enter the rate of interest of the loan:7.5
Enter the time required to repay the loan:4
No of times amount is compounded per time period:2
The compound interest calculated is: 132000

================== RESTART: N:/AP LAB/LAB 3/4.py ==================
force(60,9.8)
The force will be: 588.0 kg-m/s^2

================== RESTART: N:/AP LAB/LAB 3/5.py ==================
fact(5)
The factorial of 1 is: 120

================== RESTART: N:/AP LAB/LAB 3/6.py ==================
cel_to_fahr()
Enter the value of temperature in degree Celsius:120
The value of given data in degree fahrenheit is:  248.0

================== RESTART: N:/AP LAB/LAB 3/7.py ==================
Enter the value of temperature in degree Fahrenheit:248
Traceback (most recent call last):
  File "N:/AP LAB/LAB 3/7.py", line 2, in <module>
    cel = float(((5 / 9) * (f - 32)))
NameError: name 'f' is not defined

================== RESTART: N:/AP LAB/LAB 3/7.py ==================
Enter the value of temperature in degree Fahrenheit:
Traceback (most recent call last):
  File "N:/AP LAB/LAB 3/7.py", line 1, in <module>
    fahr = float(input("Enter the value of temperature in degree Fahrenheit:"))
ValueError: could not convert string to float: ''

================== RESTART: N:/AP LAB/LAB 3/7.py ==================
fahr_to_cel()
Enter the value of temperature in degree Fahrenheit:248
The value of given data in degree celsius is:  120.0

================== RESTART: N:/AP LAB/LAB 3/8.py ==================
area_circle()
Traceback (most recent call last):
  File "<pyshell#10>", line 1, in <module>
    area_circle()
TypeError: area_circle() missing 1 required positional argument: 'dia'
area_circle(5)
The area for given diameter cicle is: 19.625

================== RESTART: N:/AP LAB/LAB 3/9.py ==================
area_cyl(5,2)
The area of given cylinder data is: 21.98

================== RESTART: N:\AP LAB\LAB 3\3.py ==================
comp_int()
Enter the principle amount:12000
Enter the rate of interest of the loan:7.5
Enter the time required to repay the loan:4
No of times amount is compounded per time period:2
The compound interest calculated is: 786420000

================== RESTART: N:/AP LAB/LAB 3/11.py =================
area_rectprism(4,5,6)
The area of the rectangular prism is : 148

================== RESTART: N:/AP LAB/LAB 3/12.py =================
vol_rectprism(4,5,6)
The volume of the rectangular prism is : 120

================== RESTART: N:/AP LAB/LAB 3/E.py ==================
spam
spam

================== RESTART: N:/AP LAB/LAB 3/E.py ==================
Enter a value to be printed twice:23
23
23

================== RESTART: N:/AP LAB/LAB 3/E.py ==================
Enter a value to be printed twice:5
Traceback (most recent call last):
  File "N:/AP LAB/LAB 3/E.py", line 10, in <module>
    sr=string(input("Enter a string to be printed twice:"))
NameError: name 'string' is not defined

================== RESTART: N:/AP LAB/LAB 3/E.py ==================
Enter a value to be printed twice:5
5
5
5
5

================== RESTART: N:/AP LAB/LAB 3/E.py ==================
Enter a value to be printed twice:5
5
5
5
5
Traceback (most recent call last):
  File "N:/AP LAB/LAB 3/E.py", line 12, in <module>
    do_twice(print_2ice,'spam')
  File "N:/AP LAB/LAB 3/E.py", line 2, in do_twice
    f(x)
TypeError: print_2ice() missing 1 required positional argument: 'st'

================== RESTART: N:/AP LAB/LAB 3/E.py ==================
Enter a value to be printed twice:5
5
5
Traceback (most recent call last):
  File "N:/AP LAB/LAB 3/E.py", line 11, in <module>
    print_2ice(print_spam,z)
TypeError: print_2ice() takes 1 positional argument but 2 were given

================== RESTART: N:/AP LAB/LAB 3/E.py ==================
Enter a value to be printed twice:
    ================== RESTART: N:/AP LAB/LAB 3/E.py ==================


spam
spam
spam
spam

================== RESTART: N:/AP LAB/LAB 3/F.py ==================
asc_or_desc()
Traceback (most recent call last):
  File "<pyshell#16>", line 1, in <module>
    asc_or_desc()
  File "N:/AP LAB/LAB 3/F.py", line 2, in asc_or_desc
    ch=char(input("Enter a for ascending and d for descending order printing:"))
NameError: name 'char' is not defined. Did you mean: 'chr'?

================== RESTART: N:/AP LAB/LAB 3/F.py ==================
asc_or_desc()
Enter a for ascending and d for descending order printing:a
Traceback (most recent call last):
  File "<pyshell#17>", line 1, in <module>
    asc_or_desc()
  File "N:/AP LAB/LAB 3/F.py", line 2, in asc_or_desc
    ch=chr(input("Enter a for ascending and d for descending order printing:"))
TypeError: 'str' object cannot be interpreted as an integer

================== RESTART: N:/AP LAB/LAB 3/F.py ==================
asc_or_desc()
Enter a for ascending and d for descending order printing:a
1
2
3
4
5
6
7
8
9
10
asc_or_desc()
Enter a for ascending and d for descending order printing:d
10
9
8
7
6
5
4
3
2
1

================== RESTART: N:/AP LAB/LAB 3/F.py ==================
asc_or_desc()
Enter a for ascending and d for descending order printing:a
12345678910
