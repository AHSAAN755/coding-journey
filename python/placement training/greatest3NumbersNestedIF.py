a=int(input("enter a value:"))
b=int(input("enter b value:"))
c=int(input("enter c value:"))
if (a>b):
    if(a>c):
        print("greatest is:",a)
    else:
        print("greatest is:",c)
else:
    if b>c:
        print("greatest is:",b)
    else:
        print("greatest is:",c)
