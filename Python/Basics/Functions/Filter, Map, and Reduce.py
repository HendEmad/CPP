from functools import *

# filter(function, list) ==> returns the values if the operation result of them is true
nums = [3, 2, 6, 8, 4, 6, 2, 9]

'''
def is_even(n):
    return n % 2 == 0  # if true, return true to filter function, otherwise, return false to filter function
'''

# Check how many even numbers in the list `nums`
evens = list(filter(lambda n: n % 2 == 0, nums))  # if true, it returns the numbers; if false, break.
print(evens)  # [2, 6, 8, 4, 6, 2]

# Map(function, list) ==> perform a change to the all elements of the list
# we want now to double all values of the evens list
doubles = list(map(lambda a: a ** 2, evens))
print(doubles)  # [4, 36, 64, 16, 36, 4]

# reduce(function, sequence) ==>
# Now, we want to add the values of doubles list
sums = reduce(lambda a, b: a + b, doubles)
print(sums)  # 160
