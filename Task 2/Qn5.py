#Convert a given number from decimal to binary recursively. 
def dectobin(dec):
    if dec==0:
        return '0'
    elif dec==1:
        return '1'
    else:
        return dectobin(dec//2)+str(dec%2)
decnum=int(input("Enter a decimal number: "))
bin=dectobin(decnum)
print("Binary : ",bin)