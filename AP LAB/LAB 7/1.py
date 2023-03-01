def fibonac():
    n = int(input("Enter the number of terms in the fibonacci series to be printed:"))
    a, b = 0, 1
    print("Fibonacci Series:",a,b,end=' ')  
    for i in range(2, n):
        next_num = a + b
        a = b
        b = next_num
        print(next_num,end=' ')
