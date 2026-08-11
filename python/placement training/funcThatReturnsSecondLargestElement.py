#wa func that returns send largest element in list without using sort() or max()
def second(l):
    largest = l[0]
    second = l[0]
    for i in l:
        if i > largest:
            second = largest
            largest = i
        elif i > second and i != largest:
            second = i
    return second
l = list(map(int, input("Enter list elements: ").split()))
print("Second largest element:", second(l))