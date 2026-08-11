#wap to check if given 2 strings are anagrams
print("Enter string1:")
s1=input()
print("Enter string2:")
s2=input()
if len(s1)!=len(s2):
    print("not an anagram")
else:
    d1={}
    d2={}
    for x in s1:
        c=d1.get(x,0)+1
        d1[x]=c
    print(d1)
    for x in s2:
        c=d2.get(x,0)+1
        d2[x]=c
    print(d2)
    if d1==d2:
        print("anagram")
    else:
        print("not an anagram") 