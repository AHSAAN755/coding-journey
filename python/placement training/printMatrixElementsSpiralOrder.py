#wap to print a matrix element in spiral order

rows=int(input("Enter number of rows:"))
cols=int(input("Enter number of coloumns"))
matrix=[]
print("Enter the matrix:")
for i in range(rows):
    row=list(map(int,input().split()))
    matrix.append(row)

top=0
bottom=row-1
left=0
right=cols-1
print("Spiral order:")
while top<=bottom and left<=right:
  for i in range(left,right+1):
     print(matrix[i][right],end=" ")
right-=1
if top<=bottom:
 for i in range(right,left-1,-1):
    print(matrix[bottom][i],end=" ")
    bottom-=1
if left<=right:
   for i in range(bottom,top-1,-1):
      print(matrix[i][left],end=" ")
      left+=1