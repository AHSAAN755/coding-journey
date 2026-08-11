d=int(input("Enter Decimal number:"))
b=""
while d>0:
    r=d%2
    b=str(r)+b
    d=d//2
print("Binary:",b)