# sum of digits of a given number recursively
def sum(n):
    if n==0:
        return 
    return (n%10)+sum(n//10)
n=int(input("Enter number:"))
print("Sum:",sum(n))