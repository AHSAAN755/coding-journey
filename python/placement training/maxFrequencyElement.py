# find maximum frequency element
print("Enter number:")
s=map(int,input().split())
max=0
mkey=None
d={}
for x in s:
    c=d.get(x,0)+1
    d[x]=c
print(d)
for k in d:
    if(d[k]>max):
        max=d[k]
        mkey=k
print(mkey)