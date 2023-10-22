#Take an input string of arbitrary length and split it into its constituent words. 
# Construct sentences of all possible combinations using these words and print them to the console.
import itertools

def split(input):
    words = input.split()
    return words

def generate(words):
    all_combinations = []

    for r in range(1, len(words) + 1):
        combi = itertools.permutations(words, r)
        for combo in combi:
            all_combinations.append(" ".join(combo))

    return all_combinations

tring = input("Enter a String: ")
word = split(input)
combi = generate(word)

for combo in combi:
    print(combo)
