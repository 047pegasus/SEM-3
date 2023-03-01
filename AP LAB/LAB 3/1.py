def simp_int():
    p=int(input("Enter the principle amount:"))
    r=float(input("Enter the rate of interest of the loan:"))
    t=int(input("Enter the time required to repay the loan:"))
    si=(p*r*t)/100
    print("The simple interest of the given data is:",si)
