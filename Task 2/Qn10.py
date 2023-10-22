#Write a function in Python to parse a string such that it accepts a parameter- an encoded string. 
# This encoded string will contain a first name, last name, and an id. 
# You can separate the values in the string by any number of zeros. 
# The id will not contain any zeros.
# The function should return a Python dictionary with the first name, last name, and id values. 
# For example, if the input would be "John000Doe000123". 
# Then the function should return: { "first_name": "John", "last_name": "Doe", "id": "123" }
def parse(encode):
    parts=encode.split('0')
    parts=[part for part in parts if part ]
    if len(parts)<3:
        return None
    res={"first_name": parts[0],"last_name": parts[1], "id": parts[2] }
    return res
encode=input("Enter the Encoded String: ")
data=parse(encode)
if data:
    print(data)
else:
    print("Invalid input.")