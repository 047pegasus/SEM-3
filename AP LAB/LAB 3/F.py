def asc_or_desc():
    ch=input("Enter a for ascending and d for descending order printing:")
    if ch=='a':
        n=1
        while n<=10:
            print(n,' ',end='')
            n=n+1
    elif ch=='d':
        n=10
        while n>=1:
            print(n,' ',end='')
            n=n-1
    else:
        print("Enter correct character!!")
