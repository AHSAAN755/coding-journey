t= int(input("Enter number of years u have worked:"))
if t<10:
    s=float(input("enter your salary:"))
    hra=s*0.20
    da=s*0.10
    ts=s+hra+da
    print(f'''
    hra={hra}
    da={da}
    tatal salary={ts}
    ''')
else:
    print(''' not looking for someone with more than 10 years of experience''')
        

