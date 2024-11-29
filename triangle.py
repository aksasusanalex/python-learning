def triangle():
    l1=[]
    s1=int(input("enter the first side"))
    l1.append(s1)
    s2=int(input("enter the second side"))
    l1.append(s2)
    s3=int(input("enter the third side"))
    l1.append(s3)
    l1.sort()
    if l1[2]**2==l1[0]**2+l1[1]**2:
        print("its a right triangle")
    else:
        print("its not a right triangle")
triangle()