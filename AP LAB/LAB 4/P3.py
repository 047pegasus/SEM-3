def triangle_check(a,b,c):
    if (a+b)<=c:
        print("Triangle not possible!!")
    elif (b+c)<=a:
        print("Triangle not possible!!")
    elif (a+c)<=b:
        print("Triangle not possible!!")
    else:
        print("Triangle is possible to be defined with given values of: ",a,b,c)
        
