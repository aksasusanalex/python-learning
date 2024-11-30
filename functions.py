'''
Write a Python function to find the maximum of three numbers.
'''


def maximum():


    s1=[]
    n1=int(input("enter the number"))
    s1.append(n1)
    n2=int(input("enter the number"))
    s1.append(n2)
    n3=int(input("enter the number"))
    s1.append(n3)
    print(max(s1))
maximum()

'''
Write a Python function to sum all the numbers in a list.
Sample List : (8, 2, 3, 0, 7)
Expected Output : 20 
'''
def sum(l1):
    s=0
    for i in l1:
        s=s+i
    print(s)
l1=[]
n=int(input("enter the number of elements"))
for i in range(n):
    n1=int(input("enter the number"))
    l1.append(n1)
sum(l1)


def mult(l1):
    p=1
    for i in l1:
        p=p*i
    print(p)






l1=[]
n=int(input("enter the number of elements"))
for i in range(n):
    n1=int(input("enter the number"))
    l1.append(n1)
mult(l1)
'''
Write a Python program to reverse a string.
Sample String : "1234abcd"
Expected Output : "dcba4321"
'''


def rev(str):

    print(str[::-1])
str=input("enter your string")
rev(str)














