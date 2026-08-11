n=int(input("Enter number:"))
sq=n*n
n1=n
count=0
r=0
while(n>0):
    n=n//10
    count+=1
r=sq%(10**count)
if(r==n1):
    print(n1,"is automorphic number")
else:
    print(n1,"is not automorphic number")