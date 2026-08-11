#create a dynamic set to store unique id of employee in an organisation 
# wap to create dynamic dictionary to store cgpa of n students
n=int(input("Enter no of students:"))
id=set()
for i in range(n):
    e=int(input("Enter Employee ID:"))
    id.add(e)
print(id)
 