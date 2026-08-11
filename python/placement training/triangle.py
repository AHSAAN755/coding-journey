a=int(input("enter a side value:"))
b=int(input("enter b side value:"))
c=int(input("enter c side value:"))
if(a+b>c or b+c>a or a+c>b):
    if(a==b==c):
        print("triangle is equilateral")
    elif(a==b or b==c or c==a):
        print("triangle is isosceles")
    else:
        print("triangle is scalene")
else:
    print("Invalid triangle")