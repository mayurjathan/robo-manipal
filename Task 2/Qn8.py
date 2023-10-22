#Write a code in Python to create a Morse code translator. 
# You can take a string with alphanumeric characters in lower or upper case. 
# The string can also have any special characters as a part of the Morse code. 
# Special characters can include commas, colons, apostrophes, 
# exclamation marks, periods, and question marks. 
# The code should return the Morse code that is equivalent to the string.
morse_code_dict = {
    'A': '.-', 'B': '-...', 'C': '-.-.', 'D': '-..', 'E': '.',
    'F': '..-.', 'G': '--.', 'H': '....', 'I': '..', 'J': '.---',
    'K': '-.-', 'L': '.-..', 'M': '--', 'N': '-.', 'O': '---',
    'P': '.--.', 'Q': '--.-', 'R': '.-.', 'S': '...', 'T': '-',
    'U': '..-', 'V': '...-', 'W': '.--', 'X': '-..-', 'Y': '-.--',
    'Z': '--..',
    '0': '-----', '1': '.----', '2': '..---', '3': '...--', '4': '....-',
    '5': '.....', '6': '-....', '7': '--...', '8': '---..', '9': '----.',
    ',': '--..--', '.': '.-.-.-', ':': '---...', "'": '.----.', '!': '-.-.--',
    '?': '..--..', ' ': ' '
}
def texttomorse(text):
    morse=''
    for char in text:
        char=char.upper()
        if char in morse_code_dict:
            morse+=morse_code_dict[char]+' '
        else:
            morse+=' '
    return morse
word=input("Enter a text to translate to Morse code : ")
translate=texttomorse(word)
print("Morse code: ",translate)