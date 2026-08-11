#accept n values from user at runtime and add to list
n=int(input("Enter number of elements:"))
print("Enter",n,"values:")
l=[]
for i in range(n):
    x=int(input())  
    l.append(x);
print("list is:",l)
