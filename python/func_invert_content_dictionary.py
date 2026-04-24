dic = {'key1':'value1', 'key2':'value2',
'key3':'value3', 'key4':'value1',
'key5':'value3'}
print("Original Dictionary : ")
print(dic)

newdic={}
for v in dic.values():
    if v not in newdic:
        l = []
        for k in dic:
            if dic[k]== v:
                l.append(k)
        newdic[v]=l
print("New dictionary : ")
print(newdic)
