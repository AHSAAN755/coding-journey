n=int(input("Enter number:"))
r=0
min=10
max=0
while(n>0):
    r=n%10
    if(r>max):
        max=r
    if(r<min):
        min=r
    n=n//10
print("max:",max)
print("min:",min)
