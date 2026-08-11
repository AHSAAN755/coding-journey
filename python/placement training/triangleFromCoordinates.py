x1,y1=map(int,input("enter 1st coordinate:").split())
x2,y2=map(int,input("enter 2nd coordinate:").split())
x3,y3=map(int,input("enter 3rd coordinate:").split())
a= (((x2-x1)**2+(y2-y1)**2)**.5)
b= (((x3-x2)**2+(y3-y2)**2)**.5)
c= (((x1-x3)**2+(y1-y3)**2)**.5)
if(a+b>c or b+c>a or a+c>b):
    if(a==b==c):
        print("triangle is equilateral")
    elif(a==b or b==c or c==a):
        print("triangle is isosceles")
    else:
        print("triangle is scalene")
else:
    print("Invalid triangle")
