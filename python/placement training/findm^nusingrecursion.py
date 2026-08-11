#find m^n using recursion
def power(m, n):
    if n == 0:
        return 1
    return m * power(m, n - 1)

m = int(input("Enter number(m): "))
n = int(input("Enter power(n): "))

print("Result =", power(m, n))