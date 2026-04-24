list1=[1,2,3,4,5,6]
list2=[3,5,7,9]
list3=[3,4,5,10]
print("list1:",list1)
print("list2:",list2)
print("list3:",list3)
common=list(set(list1).intersection(list2,list3))
print("common elements=",common)
