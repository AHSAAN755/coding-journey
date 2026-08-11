n=int(input("Enter number:"))
n1=n
sum=0
rev=0
while(n>0):
    r=n%10
    rev=rev*10+r
    n=int(n/10)
if(rev==n1):
    print(n1,"is a palindrome")
else:
    print(n1,"is not a palindrome")