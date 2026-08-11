square=input("Enter Square:")
c=ord(square[0])-ord('A')+1
r=int(square[1])
if((r+c)%2)==0:
    print(square,"is Black")
else:
    print(square,"is White")