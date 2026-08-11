n=int(input("Enter number:"))
count=1
for i in range(2,(n//2)+1):
    if(n%i==0):
        print(n,"is not prime")
        break
else:
    print(n,"is prime")
