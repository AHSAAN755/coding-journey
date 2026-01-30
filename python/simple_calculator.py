#program to create a simple calculator
a=float(input("Enter 1:"))
b=float(input("Enter 2:"))
print("Addition is:",a+b)
print("Subtraction is:",a-b)
print("Multiplication is:",a*b)
if(b==0):
    print("cannot divide by 0")
else:
    print("Divition is:",a/b)
