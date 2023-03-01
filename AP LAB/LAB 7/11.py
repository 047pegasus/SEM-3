def is_member(x,a):
    length=len(a)
    i=0
    while (length>=0):
        if (x==a[i]):
            print("Given value exists in the list of values!!")
            return True
        else:            
            print("Given value does not exist in the list of values!!")
            return False
        length=length-1
        i=i+1
