gems=('Emerald','Ivory','Jasper','Ruby','Garnet')
price=(1760,2119,1599,3920,3999)
#choice=1
choice='Y'
while choice!='N':
    print("Purchase any item in the list:",gems)
    '''
    MODULE 1:
    elif choice==1:
        quant=int(input("Enter the quantity for Gem 1 Emerald:"))
        if quant==0:
            print("Gem cannot be purchased with 0 quantity!!")
        total_bill=price[0]*quant
    elif choice==2:
        quant=int(input("Enter the quantity for Gem 2 Ivory:"))
        if quant==0:
            print("Gem cannot be purchased with 0 quantity!!")
        total_bill=price[1]*quant
    elif choice==3:
        quant=int(input("Enter the quantity for Gem 3 Jasper:"))
        if quant==0:
            print("Gem cannot be purchased with 0 quantity!!")
        total_bill=price[2]*quant
    elif choice==4:
        quant=int(input("Enter the quantity for Gem 4 Ruby:"))
        if quant==0:
            print("Gem cannot be purchased with 0 quantity!!")
        total_bill=price[3]*quant
    elif choice==5:
        quant=int(input("Enter the quantity for Gem 5 Garnet:"))
        if quant==0:
            print("Gem cannot be purchased with 0 quantity!!")
        total_bill=price[4]*quant
    else:
        print("Wrong choice selected, not in list of gems available!!")
        total_bill=-1
    '''
    i_name=input("Enter choice to be purchased:")
    ix=gems.index(i_name)
    if ix<0:
        print("Gem not found in inventory!!")
    else:
        amt=int(input("Enter number of gem",ix+1,gems[ix],"to be purchased:"))
        total_bill=amt*price[ix]
    choice=input("Want to purchase more? Enter N to stop the purchase or Y to continue:")

if total_bill>=30000:
    print("The total bill for you rpurchase is :", total_bill)
    print("And your discount is: 5%")
    total_bill=total_bill-(total_bill*0.05)
    print("The total bill for your purchase after discount applied is:",total_bill)
elif total_bill==-1:
    print("No item purchased!!")
else:
    print("The total bill for your purchase is:",total_bill)
    print("Discount is 0% as bill value is less than 30000")
