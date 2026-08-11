#word frequency analyzer problem
text=input("ENter a sentences:").lower()
words=text.split()
visited=[]
print("\n word frequencies:")
for w in words:
    if w not in visited:
        print(w,":",words.count(w))
        visited.append(w)