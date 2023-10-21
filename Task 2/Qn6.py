
#Compress the given string S. If the string contains a character 'c,'
# that occurs X times consecutively. 
# Replace 'c' with (X, c) in the string.
def compress(s):
    compressed = []
    count = 1
    for i in range(1, len(s)):
        if s[i] == s[i - 1]:
            count += 1
        else:
            if count > 1:
                compressed.append((count, s[i - 1]))
            else:
                compressed.append(s[i - 1])
            count = 1
    if count > 1:
        compressed.append((count, s[-1]))
    else:
        compressed.append(s[-1])
    return ''.join(map(str, compressed))

ori = str(input("Enter the String: "))
com = compress(ori)
print("Compressed string: ", com)