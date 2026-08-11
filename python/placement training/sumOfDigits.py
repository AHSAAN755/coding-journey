n=int(input("Enter number:"))
sum=0
r=0
while(n>0):
    r=n%10
    sum=sum+r
    n=int(n/10)
print("Sum of digits:",sum) 