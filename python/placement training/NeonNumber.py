n=int(input("Enter number:"))
n1=n*n
sum=0
r=0
while(n1>0):
    r=n1%10
    sum+=r
    n1=int(n1/10)
if(sum == n):
    print(n,"is a neon number")
else:
    print(n,"is not a neon number")