#calculate total sales for each product
sales={}
while True:
    data=input()
    if data == "END":
        break
    prod,price=data.split()
    price=int(price)
    sales[prod]=sales.get(prod,0)+price
    for prod in sales:
        print(prod,":",sales[prod])