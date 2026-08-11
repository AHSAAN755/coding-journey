
n=int(input("Enter number of elements:"))
print("Enter",n,"values:")
l=[]
for i in range(n):
    x=int(input())  
    l.append(x);
l2=[x for x in l if x%2==0]
print(l2)
