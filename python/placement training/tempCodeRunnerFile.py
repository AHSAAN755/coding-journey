
    l.remove(mini)
    return kth_smallest(l,k-1)
l=list(map(int,input("Enter numbers:").split()))
k=int(input("Enter kth smallest number:"))
print("Kth smallest number:",kth_smallest(l,k))