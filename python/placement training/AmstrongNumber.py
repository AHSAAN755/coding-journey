n=int(input("Enter number:"))
n1=n
sum=0
r=0
while(n>0):
    r=n%10
    sum+=r**3
    n=int(n/10)
if(sum == n1):
    print(n1,"is a amstrong number")
else:
    print(n1,"is not a amstrong number")