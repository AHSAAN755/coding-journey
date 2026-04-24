str=input('Enter a string: ')
words=str.split()
data=input('Enter a word to delete: ')
c=0
for i in words:
    if i==data:
        words.remove(i)
        c=1
if c==1:
    str = ' '.join(words)
    print('String after deletion:',str)
else:
    print('Word not present in string.')
