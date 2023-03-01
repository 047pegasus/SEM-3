def comp_int():
    p=int(input("Enter the principle amount:"))
    r=float(input("Enter the rate of interest of the loan:"))
    t=int(input("Enter the time required to repay the loan:"))
    n=int(input("No of times amount is compounded per time period:"))
    ci=p*(int((1+(r/n)))**(n*t))-p
    print("The compound interest calculated is:",ci)
#i=p((1+r/n)^nt)-p
