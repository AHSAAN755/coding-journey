# recursive
# def fact(x):
#     if(x==1):
#         return 1
#     res = x*fact(x-1)
#     return res
# n=int(input("enter no:"))
# print("factorial of",n,"is:",fact(n))
#---------------------------------------------------------------------
# def outer():
#     x=100
#     def inner():
#         print(x)
#     return inner
# f=outer()
# f()
#---------------------------------------------------------------------
# def fun(n):
#     if n==0:
#         return
#     fun(n-1)
#     print(n,end=" ")
# fun(5)
#---------------------------------------------------------------------
# def fun(n):
#     if n<=1:
#         return n
#     return fun(n-1)+fun(n-2)
# print(fun(5))
#---------------------------------------------------------------------
# def fun(s):
#     if len(s)==0:
#         return
#     fun(s[1:])
#     print(s[0],end="")
# fun("ABC")
#---------------------------------------------------------------------
# def fun(n):
#     if n==0:
#         return
#     print("before:",n)
#     fun(n-1)
#     print("after:",n)
# fun(3)
#---------------------------------------------------------------------
#avg of any number of values using 