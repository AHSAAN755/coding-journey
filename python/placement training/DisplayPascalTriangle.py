#display pascal triangle for given no of rows
def pascal(rows):
    for i in range(rows):
        num = 1
        for j in range(rows - i - 1):
            print(" ", end="")
        for j in range(i + 1):
            print(num, end=" ")
            num = num * (i - j) // (j + 1)
        print()
n = int(input("Enter the number of rows: "))
pascal(n)