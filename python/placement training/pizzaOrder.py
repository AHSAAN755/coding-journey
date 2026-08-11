n=int(input("Enter no of people:"))
p=int(input("Enter number of pieces per pizza:"))
max=n
for i in range(1,(n*p)+1):
    if(i%n==0 and i%p==0):
        max=i
o=max//p
print("the no of pizzas needed:",o)