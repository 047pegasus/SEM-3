def do_twice(f,x):
    f(x)
    f(x)
def print_spam(y):
    print(y)
def print_2ice(st):
    print(st)
    print(st)
z=input("Enter a value to be printed twice:")
do_twice(print_spam,z)
#print_2ice(print_spam,z)
do_twice(print_2ice,'spam')
