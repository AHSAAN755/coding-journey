balance=int(input("balance amount:"))
w=int(input("amount to withrawn:"))
if(balance>=500):
    if(w%100==0):
        if(balance-w>500):
            print("Amount withrawn")
            print("balance",balance)
        else:
            print("minimun balance needed")
    else:
        print("invalid withrawl amount")
else:
    print("Insufficient balance")