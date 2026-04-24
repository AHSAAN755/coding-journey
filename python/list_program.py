#Write a program to illustrate operations of List:append(), insert(), remove(),
#pop(), clear(), sort(), reverse()
# Creating a List with Mixed Datatypes
L1 =[5,'Welcome',7.0,'ai&ml', 6+9j]
print("\nList with Mixed Datatypes: ")
print(L1)

# Accessing List with Indexing
print("\nFirst element of Tuple is: ")
print(L1[0])
# Concatenation of Lists L1 and L2
L2 = ['Hi', 'Wel', 'Come']
L3 = L1 + L2
print("Result of concatenation of L1 and L2:",L3)

# Operations on Lists
L4=[5,1,23,6,0,66,25]
#len(), max(), min(), sum(), any(), all(), sorted()
print("Length of a given List L4 is:",len(L4))
print("Max element in a given List L4 is:",max(L4))
print("Min element in a given List L4 is",min(L4))
print("Sum of all elements in a given List L4 is",sum(L4))
print("any=",any(L4))
print("All=",all(L4))
print("Elements of L4 after sorting are:",sorted(L4))
#L4= [5,1,"ew3"]
#print("All=",all(L4))

#L4= [0,0,0.0]
#print("any=",any(L4))

#append(), insert(), remove(), pop(), clear(), sort(), reverse()
L5=[5,1,23,6,0,66,25]
print("Append an element 500 to List L5:")
L5.append(500)
print("L5 after appending element 500:",L5)
print("Insert 999 at the index 5 L5:")
L5.insert(5,999)
print("L5 after inserting 999 at index 5:",L5)
print("Remove 25 from List L5:")
L5.remove(25)
print("L5 after removing 25:",L5)
print("Pop an element with index 2 from List L5:",L5.pop(2))
print("L5 after popping an element at index 2:",L5)
print("Index of specified element 6:",L5.index(6))
print("Get the count of element 6 that appears in L5:",L5.count(6))
print("Elements after sorting in L5:")
print(L5.sort())
print("Elements after reversing the elements in L5:")
print(L5.reverse())
