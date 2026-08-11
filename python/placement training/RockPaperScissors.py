a=int(input("1 for rock,2 for paper,3 for scissors,a:"))
b=int(input("1 for rock,2 for paper,3 for scissors,b:"))
if(a==b):
    print("its a tie")
if((a==1 and b==3) or (a==2 and b==1) or (a==3 and b==2)):
    print("a wins")
if((a==1 and b==2) or (a==2 and b==3) or (a==3 and b==1)):
    print("b wins")