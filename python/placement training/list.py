#  matrix = [[i*j for j in range(1,4)]for i in range(10,13)]
# print(matrix)
#-----------------------------------------------------------------------------------
# rows, cols=map(int,input().split())
# matrix=[[int(x) for x in input().split()[:cols]] for _ in range(rows)]
# print(matrix)
#-----------------------------------------------------------------------------------
#wap to find sum of even numbers in list
# n=int(input("Enter number of elements:"))
# print("Enter",n,"values:")
# l=[]
# sum=0
# for i in range(n):
#     x=int(input())  
#     l.append(x);
# print("list is:",l)
# l2=[x for x in l if x%2==0]
# print(l2)
# for  i in l2:
#     sum+=i
# print(sum)
#-----------------------------------------------------------------------------------
# display largest element in list
# n=int(input("Enter number of elements:"))
# print("Enter",n,"values:")
# l=[]
# max=0
# for i in range(n):
#     x=int(input())  
#     l.append(x);
# print("list is:",l)
# for i in l:
#     if(max<i):
#         max=i
# print("largest number is:",max)
#-----------------------------------------------------------------------------------
# check whether list is palindrome
# n=int(input("Enter number of elements:"))
# print("Enter",n,"values:")
# l=[]
# for i in range(n):
#     x=int(input())  
#     l.append(x);
# print("list is:",l)
# left=0
# right=n-1
# for _ in range(n//2):
#     if(l[left]!=l[right]):
#         print("not a palindrome")
#         break
#     left+=1
#     right-=1
# else:
#     print("is a palindrome")
#-----------------------------------------------------------------------------------
#wap to count the frequencies of numbers in tuple
# print("Enter elements:")
# t=tuple(map(int,input("").split()))
# print(t)
# visited=()
# for x in t:
#     count=0
#     if x not in visited:
#         for y in t:
#             if(x==y):
#                 count+=1
#         visited+=(x,)
#         print(x,"->",count)
#-----------------------------------------------------------------------------------
#to remove duplicates in list or tuple
# print("Enter elements:")
# t=tuple(map(int,input("").split()))
# print(t)
# visited=()
# for x in t:
#     if x not in visited:
#         visited+=(x,)
# print(visited)
#-----------------------------------------------------------------------------------
