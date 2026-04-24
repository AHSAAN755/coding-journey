# Creating a Tuple with Mixed Datatypes
T1 =(5,'Welcome',7.0,'Geeks', 6+9j)
print("\nTuple with Mixed Datatypes: ")
print(T1)
# Accessing Tuple with Indexing
print("\nFirst element of Tuple is: ")
print(T1[0])
# Unpacking values of Tuple1
a,b,c,d,e=T1
print("Unpacked values of Tuple1 are:",a," ",b," ",c," ",d," ",e)
# Concatenation of tuples
T2 = ('Hi','Wel', 'Come')
T3 = T1 + T2
print("Result of concatenation of T1 and T2:",T3)
