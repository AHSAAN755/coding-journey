n=int(input("Enter number:"))
count=0
r=0
while(n>0):
    r=n%10
    count+=1
    n=int(n/10)
print("number of digits:",count) 