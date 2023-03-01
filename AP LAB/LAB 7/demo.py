Python 3.10.6 (tags/v3.10.6:9c7b4bd, Aug  1 2022, 21:53:49) [MSC v.1932 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
my_string="Hello"
print(my_string)
Hello
print my_string
SyntaxError: Missing parentheses in call to 'print'. Did you mean print(...)?
my_string=''' Hi I am Tanishq Agarwal a student of
2nd year and I am a good guy!!'''
print(my_string)
 Hi I am Tanishq Agarwal a student of
2nd year and I am a good guy!!
default_order="{},{} and {}".format('ECE','MEC','CSE')
print("\n Default_order")

 Default_order
print(default_order)
ECE,MEC and CSE
positional_order="{1}in {0} is {2}".format("Guna",'University',"JUET")
print('\n Positonal_order')

 Positonal_order
print(positional_order)
Universityin Guna is JUET
keyword_order="{r} has {j} and {u}.".format(j="Jaypee", u="University", r="Raghogarh")
print("\n Keyword Order")

 Keyword Order
print("keyword_order)
      
SyntaxError: unterminated string literal (detected at line 1)
print(keyword_order)
      
Raghogarh has Jaypee and University.
mystring=input('Enter your string in quotes:')
      
Enter your string in quotes:"Helloe"
print("The string {0} has length {1}").format(mystring,len(mystring))
      
The string {0} has length {1}
Traceback (most recent call last):
  File "<pyshell#17>", line 1, in <module>
    print("The string {0} has length {1}").format(mystring,len(mystring))
AttributeError: 'NoneType' object has no attribute 'format'
