#wap to stimulate an ATM transaction logger.the program should accept transactionat runtime,separate deposits and withdrawals into two diffrent list and display the summary.
print("Enter elements:")
tran_list=list(map(int,input("").split()))
print(tran_list)
w=[]
d=[]
for x in tran_list:
    if(x>0):
        d.append(x)
    else:
        w.append(x)
print("Deposits:",d)
print("Withdrawls",w)
