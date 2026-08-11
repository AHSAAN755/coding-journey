# first Non Repeating Char In String
print("Enter string:")
s=input()
d={}
for x in s:
    c=d.get(x,0)+1
    d[x]=c
print(d)
for x in s:
    if(d[x]==1):
        print(x,"is the first non repeating character")
        break
else:
    print("there are no non repeating characters")