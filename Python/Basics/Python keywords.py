# Common keywords:
# [False, True, None, and, or, not, in, is, break, continue, pass, def, del, from
#  if, else, elif, class, try, except, for, global, import, lambda, return, while

# Other keywords:
# [assert, async, await, finally, nonlocal, raise, yield]

# as ---> Used in aliasing
import math as myALias
print(myALias.cos(myALias.pi))  # -1.0

# Assert
# It is always followed by a condition.
# If the condition is true, nothing will happen.
# If the condition is false, (AssertionError) is raised

a = 4
assert a < 5
assert a > 5, "The value of a is too small"
# Output:

'''
AssertionError
'''


assert a > 5, "The value of a is too small"
# this ==
if not a > 5:
    raise AssertionError("The value of a is too small")
# ----------------------------------------------------------------------------

# async....await

import asyncio
async def main():
    print("Hello")
    await asyncio.sleep(1)
    print("World")


asyncio.run(main())

# Here, first Hello is printed. The await keyword makes the program wait for 1 second.
# And then the world is printed.
# ----------------------------------------------------------------------------

# DEL --> It is used to delete the reference to an object
a = b = 5
del a
a  # Not defined as it is deleted

# It also can be used to delete item from a list
a = ['x', 'y', 'z']
del a[1]
print(a)
# ----------------------------------------------------------------------------

# try..except..raise
def reciprocal(num):
    try:
        r = 1 / num
    except:
        print("Exception caught")
        return
    return r


print(reciprocal(10))
print(reciprocal(0))
# This code will divide 1 by the input number, but if the number is 0,
# a ZeroDivisionError will raise automatically.
# Try..except only catches this exception
# It returns none if it has caught the exception(error).
# Output:
'''
0.1
Exception caught
None
'''

# RAISE
# This code equals to:
num = int(input("Enter a number: "))
if num == 0:
    raise ZeroDivisionError("Cannot divide by 0")
# ----------------------------------------------------------------------------

# FINALLY
# It is used to ensure that a specific statement will be executed even if there is a caught exception.
# ----------------------------------------------------------------------------


# Global
# It is used to declare a variable inside a function as a local variable.
# ----------------------------------------------------------------------------

# LAMBDA(Inline function)
a = lambda x: x * 2
for i in range(1, 6):
    print(a(i))
# Output:
'''
2
4
6
8
10
'''
# ----------------------------------------------------------------------------
# nonlocal = global
# ----------------------------------------------------------------------------

# Yield
# Similar to (return), but it returns generator
'''
Generator is an iterator that generates one item at a time. 
A large list of values will take up a lot of memory. 
Generators are useful in this situation 
as it generates only one value at a time instead of 
storing all the values in memory.
'''

# Example
def generator():
    for i in range(6):
        yield i * i

g = generator()
for i in g:
    print(i)
# Output:
'''
0
1
4
9
16
25
'''