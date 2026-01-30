#wap to print compound intrest
p=int(input("Enter p:"))
t=int(input("Enter t:"))
r=float(input("Enter r:"))
a=p*(1+r/100)**t
print(f"amount:{a:.2f}")
ci = a-p
print(f"compount intrest:{ci:.2f}")
