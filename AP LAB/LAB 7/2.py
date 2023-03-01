def prime(a,b):
    print("The prime values between given values",a," and ",b," are: ")
    i_prime=True
    for i in range(a,b):
        for j in range(3,b-1):
            if i%j==0:
                i_prime=False
        if i_prime==True:
            print(i,end=" ")
