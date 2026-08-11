#wap to compress string
#aaabbccccdd
#output
#a3b2c4d2
s=input("Enter string:")
count=1
for i in range(len(s)-1):
    if s[i]==s[i+1]:
        count+=1
    else:
        print(s[i]+str(count),end="")
        count=1
print(s[-1]+str(count),end="")