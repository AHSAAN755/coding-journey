# wap to create dynamic dictionary to store cgpa of n students
n=int(input("Enter no of students:"))
d={}
roll=0;
gpa=0
for i in range(n):
    roll=int(input("Enter roll no:"))
    gpa=float(input("Enter CGPA:"))
    d[roll]=gpa
print(d)
for roll in d:
    print(roll,"-->",d[roll]) 