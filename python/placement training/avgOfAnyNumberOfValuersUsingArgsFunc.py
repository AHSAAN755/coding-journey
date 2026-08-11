#avg of any number of values using *args
def fun(*a):
    sum = 0
    for n in a:
        sum += n
    avg = sum / len(a)
    return avg
print(fun(10,20,30,40))