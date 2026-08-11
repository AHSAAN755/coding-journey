#Reverse every word in given statement without changing their order
#hi i am ahsaan
#ih i ma naasha
s=input("Enter a sentence:")
word=""
for i in range(len(s)):
    if s[i]!=" ":
        word= s[i]+ word
    else:
        print(word,end=" ")
        word=""
print(word)