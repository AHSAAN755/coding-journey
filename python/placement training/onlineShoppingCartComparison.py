#wap to stimulate an online shopping cart comparison. the program should read items from two customers's cart at runtime and print all unique items and common items
a_list=list(map(str,input("Enter customer 1 cart items:\n").split()))
print(a_list)
b_list=list(map(str,input("Enter customer 2 cart items:\n").split()))
print(b_list)
common=[]
unique=[]
for x in a_list:
    unique.append(x)
for y in b_list:
    if y not in unique:
        unique.append(y)
for x  in a_list:
    if x in b_list:
        common.append(x)
print("unique:",unique)
print("common:",common)