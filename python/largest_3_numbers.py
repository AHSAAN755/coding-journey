a=int(input("Enter first number: "))
b=int(input("Enter second number: "))
c=int(input("Enter third number: "))
if(a>b and a>c):
    print("largest number:",a)
elif(b>c):
    print("largest number:",b)
else:
    print("largest number:",c)
