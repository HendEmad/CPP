"""
|1.| Filter()
===============
It extracts elements from an iterable (list, tuple, set, ....) for which a function return True.
"""
# ex.1
numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]


def check_even(number):
    if number % 2 == 0:
        return True
    return False


even_numbers = filter(check_even, numbers)

# It returns an iterator, so we must cast its output into list type to display the output
even_numbers = list(even_numbers)
print(even_numbers)  # [2, 4, 6, 8, 10]

# Explanation of filter function work:
"""
- Each element of numbers list is passed to the check_even function.
- If check_even return True, the element is extracted from the list, otherwise, it filtered out.
- We can use loop to extract the elemets from the list, but using built-in function is more cleaner.
"""

# Filter with Lambda:
# ============================
numbers = [1, 2, 3, 4, 5, 6, 7]
even_numbers_iterator = filter(lambda x: (x % 2 == 0), numbers)
even_numbers = list(even_numbers_iterator)
print(even_numbers)  # [2, 4, 6]

# Filter with None (Using none as a function inside filter)
# ============================================================
random_list = [1, 'a', 0, False, True, '0']
filtered_iterator = filter(None, random_list)
filtered_list = list(filtered_iterator)
print(filtered_list)  # [1, 'a', True, '0']
# It will return all elements that gives True if converted to Boolean.
# # --------------------------------------------------------------------------------------------

"""
|2.| all()
===============
It returns True if all elements in the given iterable are True or if the iterable is empty, otherwise, it returns False.
"""
boolean_list = ['True', 'True', 'True']
result = all(boolean_list)
print(result)  # True

# all() Function cases:

# All values True:
l = [1, 3, 4, 5]
print(all(l))  # True

# All values False
l2 = [0, 'False']
print(all(l2))  # False

# One False value
l3 = [1, 3, 4, 0]
print(all(l3))  # False

# One True value
l4 = [0, False, 1]
print(all(l4))  # False

# Empty iterable
l5 = []
print(all(l5))  # True

# all() with strings:
s = "This is good"
print(all(s))  # True

# note that 0 of False, but '0' is True
# All strings return True(Value) if it is casted to boolean

s = '000'
print(all(s))  # True

s = ''
print(all(s))  # True

# all() with dictionaries
# It returns True if all KEYS are ture

s = {0: 'False', 1: 'False'}
print(all(s))  # False

s = {1: 'True', 2: 'True'}
print(all(s))  # True

s = {1: 'True', False: 0}
print(all(s))  # False

s = {}
print(all(s))  # True

# 0 is False
# '0' is True
s = {'0': 'True'}
print(all(s))  # True
# ---------------------------------------------------------------------------------------------------------------------

"""
|3.| map() Function:
- It is used to apply a given function on an iterable (list, set, tuple, ...)
- It is allowable to pass more than one 'iterable' to the 'map' function
"""
# Ex:
numbers = [2, 4, 6, 8, 10]
def square(number):
    return number * number
squared_numbers_iterator = map(square, numbers)
squared_numbers = list(squared_numbers_iterator)
print(squared_numbers)  # [4, 16, 36, 64, 100]

# Lambda function with map():
numbers = (1, 2, 3, 4)
result = map(lambda x: x * x, numbers)
print(result)

numbersSquare = set(result)
print(numbersSquare)  # {16, 1, 4, 9}

# Passing multiple iterators to map() function:
num1 = [4, 5, 6]
num2 = [5, 6, 7]

result = map(lambda n1, n2: n1 + n2, num1, num2)
print(list(result))  # [9, 11, 13]

