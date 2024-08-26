# pattern name
word = "Dev"
for i in range(1, len(word) + 1):  
    print(' ' * (len(word) - i) + ' '.join(word[:i])) 