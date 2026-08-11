a=int(input("enter a side value:"))
b=int(input("enter b side value:"))
c=int(input("enter c side value:"))
if(a+b>c or b+c>a or a+c>b):
    if(a*a==b*b+c*c or b*b == a*a+c*c or c*c==a*a+b*b):
        print("valid")
    else:
        print("invalid")
else:
    print("Invalid triangle")