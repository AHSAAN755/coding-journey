#frequency count of elements in a list using dictionary
print("Enter numbers:")
l=list(map(int,input().split()))
d={}
for x in l:
    c=d.get(x,0)+1
    d[x]=c
print(d)