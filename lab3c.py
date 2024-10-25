'''
celsius fahrenheit conversion
'''

temp=int(input("enter the temperature"))
qn=input("is this in (C)elsius or (F)ahrenheit")
if qn=="C" or qn==("c"):
    f=(9/5*temp)+32
    print(temp,"Celsius is",f,"Fahrenheit")
else:
    c=5/9*(temp-32)
    print(temp,"Fahrenheit is",c,"Celsius")
