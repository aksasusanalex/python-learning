l1=[]
l2=[]
n1=int(input("enter the no.of elements in list1"))
for i in range (n1):
    num=int(input("enter the number"))
    l1.append(num)
n2=int(input("enter the no.of elements in list2"))
for j in range(n2):
    num2=int(input("enter the number"))
    l2.append(num2)
l3=[]
l3=l1+l2
even=[]
odd=[]
for i in l3:
    if i%2==0:
        even.append(i)
    else:
        odd.append(i)
even.sort()
odd.sort()
l3=even+odd
print("l1=",l1)
print("l2=",l2)
print(l3)
