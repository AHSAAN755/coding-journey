n=int(input("Enter number:"))
n1=n
sum=0
r=0
p=1
while(n>0):
    r=n%10
    sum+=r
    p*=r
    n=int(n/10)
if(sum == p):
    print(n1,"is a spy number")
else:
    print(n1,"is not a spy number")