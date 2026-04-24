def change_list(lst):
    lst.append(60)
    print("list inside function=",lst)
lst = [10,30,40,50]
change_list(lst)
print("list outside function is",lst)
