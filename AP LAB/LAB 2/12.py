'''
This program is created by Tanishq Agarwal(211B326)
Lab 2 Question 12
'''
PI = 3.1415
length = int(input("Enter length of the rectangle: "))
height = int(input("Enter height of the rectangle: "))
radius = int(input("Enter radius of the circle: "))
print("Rectangle:")
print("Area of the rectangle is:", length * height)
print("Perimeter of the rectangle is:", 2 * (length + height))
print("Circle:")
print("Area of the circle is:", PI * radius * radius)
print("Circumference of the circle is:", 2 * PI * radius)
