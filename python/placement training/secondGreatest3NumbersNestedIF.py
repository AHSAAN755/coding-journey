a=int(input("enter a value:"))
b=int(input("enter b value:"))
c=int(input("enter c value:"))
if (a>b):
    if(a>c):
        if(b>c):
            print("second greatest is:",b)
        else:
            print("second greatest is:",c)
    else:
        print("second greatest is:",a)
else:
    if b>c:
        if(a>c):
            print("second greatest is:",a)
        else:
            print("second greatest is:",c)
    else:
        print("second greatest is:",b)
