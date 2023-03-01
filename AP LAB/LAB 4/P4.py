counter1=0
counter2=5
while counter1 < 5:
    star=""
    while counter2 > counter1: 
        star=star+"*" 
        counter2-=1
    print(star) #Missing Parenthesis debugged
    counter1+=1 
    counter2=5 #conuter2 variable not updated, Debugged successfully!!
