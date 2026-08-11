n=int(input("Enter number of terms:"))
a=0
b=1
for i in range(1,n+1):
    if i==1:
        print(a,end=" ")
    elif i==2:
        print(b,end=" ")
    else:
        c=a+b
        a=b
        b=c
        print(c,end=" ")
    