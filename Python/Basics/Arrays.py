# import array as arr
from array import *

# create an array for marks (array of numebrs)
# getting the size
print("getting the size::\n")
vals = array('I', [50, 90, 80, 40, 20])
print("The address and size= ", vals.buffer_info()) # (1747323866896, 5)

# getting the type code
print("getting the type code::\n")
print("The type code of elemets= ", vals.typecode) # I

# append new values
print("append new values::\n")
vals.append(95)
print("After adding the new element: ", vals) # [50, 90, 80, 40, 20, 95]

# reversing
print("reversing::\n")
# vals.reverse()
# print("Array after reversing the elements: ", vals) # [95, 20, 40, 80, 90, 50]

# printing elements one by one, using for loop
print("printing elements one by one, using for loop::\n")
for val in vals:
    print(val)

print()

for i in range(len(vals)):
    print(vals[i])

# printing the elements one by one, using while loop
print("printing the elements one by one, using while loop::\n")
i = 0
while i < len(vals):
    print(vals[i])
    i += 1
    
# Creating a new array same values and typecode as the vals array
print("Creating a new array same values and typecode as the vals array::\n")
newVals = array(vals.typecode, [val for val in vals])
print("The new similar vals array: ", newVals)

# Creating a new array same values, but squared and typecode as the vals array
print("Creating a new array same values, but squared and typecode as the vals array::\n")
squareVals = array(vals.typecode, [val**2 for val in vals])
print("The vals array with a square values: ", squareVals)

# Create an array of characters
print("Create an array of characters::\n")
chars = array('u', ['a', 'e', 'i'])
print("Array of characters elements: ")
for char in chars:
    print(char)
