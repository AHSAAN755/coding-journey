#Write a program to find common values between two lists.

list1 = [1, 2, 3, 4, 5, 6]
list2 = [3, 5, 7, 9]
list3 = [3, 4, 5, 10]
# Using the set intersection method
common_elements = list(set(list1).intersection(list2, list3))
print("Common elements using intersection():", common_elements)
# Using the bitwise AND operator
common_elements_operator = list(set(list1) & set(list2) & set(list3))
print("Common elements using & operator: ", common_elements_operator)
