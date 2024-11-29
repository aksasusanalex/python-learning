def add(num1,num2):
    if num2==0:
        return num1
    else:
        return  add(num1+1,num2-1)
num1=int(input("enter the number"))
num2=int(input("enter the number"))
print("sum of two numbers",num1 ,"and",num2," is:",add(num1,num2))
