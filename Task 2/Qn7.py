#Given 2 points (x1,y1) and (x2,y2), where x1, x2 are x-coordinates 
# and y1, y2 are y-coordinates of the points. 
# Compute the distance between them.
import math
x1 = float(input("Enter the x-coordinate of the first point: "))
y1 = float(input("Enter the y-coordinate of the first point: "))
x2 = float(input("Enter the x-coordinate of the second point: "))
y2 = float(input("Enter the y-coordinate of the second point: "))
distance = math.sqrt((x2 - x1) ** 2 + (y2 - y1) ** 2)
print("The distance between the points is:", distance)