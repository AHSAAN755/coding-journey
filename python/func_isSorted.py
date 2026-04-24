def is_sorted(mylist):
    if sorted(mylist)==mylist:
        return True
    else:
        return False
print(is_sorted([1,2,2]))
print(is_sorted([1,2,1,2]))
print(is_sorted([]))
print(is_sorted(['b','a']))

