
while True:
    print("\n1.\tConvert Celsius to Fahrenheit")
    print("2.\tConvert Fahrenheit to Celsius")
    print("3.\t Exit")
    choice=int(input("enter your choice"))
    if choice==1:
        temp=float(input("enter the temperature"))
        temp2=(temp * 9/5) + 32
        print("temperature in fahrenheit",temp2)
    elif choice==2:
        temp=float(input("enter the temperature"))
        temp3=(temp - 32) * 5/9
        print("temperature in celsius",temp3)
    elif choice==3:
        break
    else:
        print("invalid entry")



