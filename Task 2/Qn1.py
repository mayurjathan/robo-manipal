# Take input of 3 numbers and find the maximum number amongst them
n1=float(input("Enter the first number: "))
n2=float(input("Enter the second number: "))
n3=float(input("Enter the third number: "))
max=n1
if n2>max:
    max=n2
if n3>max:
    max=n3
print("The maximun number among ",n1,",",n2,"and",n3,"is",max)
        