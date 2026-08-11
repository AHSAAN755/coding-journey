# d1={"A":10,"B":20}
# d2=d1.copy()
# d2["A"]=100
# print("d1=",d1)
# print("d2=",d2)
#----------------------------------------------------------------------------
#wap to find the avg marks of 3 mid of n students 
n=int(input("Enter number of students:"))
d={}
avg={}
for i in range(n):
    a=0
    roll=int(input("Enter roll no:"))
    marks_mid=[]
    print("Enter marks for 3 mids:")
    for i in range(3):
        m=int(input())
        marks_mid.append(m)
        a+=m
    d[roll]=marks_mid
    avg[roll]=a/3
print(d)
print(avg)
for k in avg:
    print(f"{k}-->{avg[k]:.2f}")