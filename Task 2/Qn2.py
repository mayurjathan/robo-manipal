#Take an input string of arbitrary length and split it into its constituent words. 
# Construct sentences of all possible combinations using these words and print them to the console.
def split(input):
    words=[]
    word=''
    for char in input:
        if char == ' ':
            if word:
                words.append(word)
            word=''
        else:
            word+=char
    if word:
        words.append(word)
    return words

def generate(words):
    def helper(words,cur,ind,res):
        if ind==len(words):
            res.append(' '.join(cur))
            return
        helper(words,cur+[words[ind]],ind+1,res)
        helper(words,cur,ind+1,res)
    sente=[]
    helper(words,[],0,sente)
    return sente
input=input("Enter a String : ")
word=split(input)
sente=generate(word)
for sent in sente:
    print(sent)
                