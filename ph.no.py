def num():
    n=input("enter the ph_no")
    if len(n)==10 and n[0] in '7,8,9':
        print("valid number")
    else:
        print("invalid number")

num()