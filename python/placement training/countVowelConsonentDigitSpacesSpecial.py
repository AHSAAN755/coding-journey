# count vowels,constants,digits,spaces,and special charcter.
s = input("Enter string: ")
v = 0
c = 0
d = 0
sp = 0
sc = 0

for i in range(len(s)):
    if s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or \
       s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U':
        v += 1

    elif ('a' <= s[i] <= 'z') or ('A' <= s[i] <= 'Z'):
        c += 1

    elif '0' <= s[i] <= '9':
        d += 1

    elif s[i] == ' ':
        sp += 1

    else:
        sc += 1

print("Vowels =", v)
print("Consonants =", c)
print("Digits =", d)
print("Spaces =", sp)
print("Special Characters =", sc)