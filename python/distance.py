# Distance b/w two points program
import math
x1=float(input("Enter x1: "))
y1=float(input("Enter y1: "))
x2=float(input("Enter x2: "))
y2=float(input("Enter y2: "))
dist=math.sqrt((x2-x1)**2 + (y2-y1)**2)
print("Distance between two points: ",dist)
