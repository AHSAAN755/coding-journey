def min(l,index=1,mini=None):
    if mini is None:
        mini=l[0]
    if index==len(l):
        return mini
    if l[index]<mini:
        mini=l[index]
    return min(l,index+1,mini)
def kth_smallest(l,k):
    if k<1 or k>len(l):
        return None
    if k==1:
        return min(l)
    mini=min(l)
    l.remove(mini)
    return kth_smallest(l,k-1)
l=list(map(int,input("Enter numbers:").split()))
k=int(input("Enter kth smallest number:"))
print("Kth smallest number:",kth_smallest(l,k))