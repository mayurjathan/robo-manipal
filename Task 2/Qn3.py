#Input a list of numbers and get the second largest number from the list.
num= input("Enter a list of number : ")
numlist=[int(n)for n in num.split()]
if len(numlist)<2:
    print("Enter at least two numbers ")
else:
    max=float('-inf')
    sec=float('-inf')
    for n in numlist:
        if n>max:
            sec=max
            max=n
        elif n>sec and n!=max:
            sec=n
    if sec==float('-inf'):
        print("There is no second maximum as all numbers are the same.")
    else:
        print("The second largest number is:", sec)