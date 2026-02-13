exp=int(input("Enter experience:"))
if(exp<10):
    bp=20000
elif(exp>10 and exp<20):
    bp=30000
elif(exp>20 and exp<30):
    bp=60000
else:
    bp=90000
hra=bp*0.20
da=bp*0.70
ts=bp+hra+da
print("salary",ts)
