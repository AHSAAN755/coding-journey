n=int(input("n="))
a1=0
a2=1
count=0
while(count<n):
    print(a1 ,end=" ")
    b=a1+a2
    a1=a2
    a2=b
    count+=1
