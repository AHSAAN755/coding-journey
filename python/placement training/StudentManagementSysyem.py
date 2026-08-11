# wap to build a menu-driven student management system using a while look allowing the user to add, view, update, delete studen records untill they choose to exit
student={}
while(True):
    print("\n1.add\n2.view\n3.update\n4.delete\n5.exit\n")
    choice=input("Enter choice:")
    if(choice=="1"):
        htno=input("Enter HT no:")
        name=input("Enter Name:")
        branch=input("Enter Branch:")
        cgpa=float(input("Enter cgpa:"))
        stud={"name":name,"branch":branch,"cgpa":cgpa}
        student[htno]=stud
        print("Record added successfully...")
        print(student)

    if(choice=="2"):
        htno=input("Enter HT no:")
        print(student[htno])
        if htno in student.keys():
            print("Name:",student[htno]["name"])
            print("Branch:",student[htno]["branch"])
            print("CGPA:",student[htno]["cgpa"])
        else:
            print("No Search Record")

    if(choice=="3"):
        htno=input("Enter HT no:")
        if htno in student.keys():
            student[htno]["name"]=input("Enter New Name")
            student[htno]["branch"]=input("Enter New Branch")
            student[htno]["cgpa"]=float(input("Enter New CGPA"))
        else:
            print("No Search Record")

    if(choice=="4"):
        htno=input("Enter HT no:")
        if htno in student.keys():
            del student[htno]
        else:
            print("No Search Record")

    if(choice=="5"):
        break
