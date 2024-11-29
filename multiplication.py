def multiply(n1,n2):
    if n2==1:
        return n1
    else:
        return n1+multiply(n1,n2-1)
n1=int(input("enter number1"))
n2=int(input("enter the number2"))
#multiply(n1,n2)
print("the product of two nos ",n1,"and",n2,"is",multiply(n1,n2))
