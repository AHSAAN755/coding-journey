m= int(input("enter m marks:"))
p= int(input("enter p marks:"))
c= int(input("enter c marks:"))
avg=(m+p+c)/3
if(avg>=70):
    print(f"Grade A and average is{avg}")
elif(avg>=60 and avg<=70):
    print(f"Grade B and average is{avg}") 
elif(avg>=50 and avg<=60):
    print(f"Grade C and average is{avg}")
elif(avg>=40 and avg<=50):
    print(f"Grade D and average is{avg}")
else:
    print("Grade Fail and average is{avg}")
    
