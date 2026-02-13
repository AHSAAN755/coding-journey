exp=int(input("Enter experience:"))
if(exp<10):
    bp=20000
else:
    bp=40000
hra=bp*0.20
da=bp*0.10
ts=bp+hra+da
print("salary",ts)
