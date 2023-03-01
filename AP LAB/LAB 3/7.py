def fahr_to_cel():
    fahr = float(input("Enter the value of temperature in degree Fahrenheit:"))
    cel = float(((5 / 9) * (fahr - 32)))
    print("The value of given data in degree celsius is: ",cel)
