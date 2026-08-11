ip_str=input("Enter number:")
n=int(ip_str)
t=False
while(n>0):
    r=n%10
    if(r==0):
        t=True
        break
    n=int(n/10)
if t and ip_str[0]!='0':
    print("Duck Number")
else:
    print("not a duck number")