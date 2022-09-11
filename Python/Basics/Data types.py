'''
Everything in python is an object. Thus, data types are classes
and variables are instances(objects) from these classes.
'''

# Numbers(int, float, complex)

a = 5 # int
print(a, "is of type ", type(a)) # 5 is of type  <class 'int'>
# type() is a mehtof to find the data type of a value
print(a, "is int number? ", isinstance(a, int)) # 5 is int number?  True
# is instance(var, data_type) is a method
# to ckeck if an object belongs to a particular class or not

b = 2.0 # float
print(b, "is of type ", type(b)) # 2.0 is of type  <class 'float'>
print(b, "is float number? ", isinstance(b, float)) # 2.0 is float number?  True

c = 1 + 2j
print(c, "is of type ", type(c)) # (1+2j) is of type  <class 'complex'>
print(c, "is complex number? ", isinstance(c, int)) # (1+2j) is complex number?  False

#-----------------------------------------------------------------------------------------
# List
'''
- Ordered sequence
- It can contain elemts with different data types
'''

a = [1, 2.2, 'Python']
a = [5,10,15,20,25,30,35,40]

print("a[2] = ", a[2]) # a[2] =  15

print("a[0:3] = ", a[0:3]) # a[0:3] = [5, 10, 15]

print("a[5:] = ", a[5:]) # a[5:] = [30, 35, 40]

# Lists are (mutable), meaning, the value of elements of a list can be altered.
a = [5, 2, 3]
a[2] = 4
print(a) # [1, 2, 4]

#------------------------------------------------------------------------------------------
# Tuple

'''
- Ordered
- Immutable
- Faster than lists as they can not change dynamically.
- Used to write-protect data as it can not be modified after creation.
'''
t = (5,'program', 1+3j)

print("t[1] = ", t[1]) # t[1] = 'program'

print("t[0:3] = ", t[0:3]) # t[0:3] = (5, 'program', (1+3j))

# Generates type error
# Tuples are (immutable)
t[0] = 10 # TypeError: 'tuple' object does not support item assignment

#------------------------------------------------------------------------------------------
# String

s = "This is a string"
print(s) # This is a string
s = '''A multiline
string'''
print(s) # A multiline
         # string


s = 'Hello world!'
print("s[4] = ", s[4]) # s[4] = 'o'
print("s[6:11] = ", s[6:11]) # s[6:11] = 'world'
# Generates type error
# Strings are (immutable) in Python
s[5] ='d' # TypeError: 'str' object does not support item assignment

#------------------------------------------------------------------------------------------
# Set
'''
- Unique values
- Items are not ordered
'''

a = {5, 2, 2, 2, 3, 1, 4, 4, 4, 4, 4}
print("a = ", a) # a = {1, 2, 3, 4, 5}
print(type(a)) # <class 'set'>

# Since, set are unordered collection, indexing has no meaning.
# Hence, the slicing operator [] does not work.
a[1] # TypeError: 'set' object is not subscriptable

#------------------------------------------------------------------------------------------
# Dictionary
# Unordered

d = {1: 'value', 'key': 2}
print(type(d)) # <class 'dict'>

print("d[1] = ", d[1]) # d[1] = Value
print("d['key'] = ", d['key']) # d['key'] = 2
print("d[2] = ", d[2]) # key error

#------------------------------------------------------------------------------------------
# Conversion between data types

print(float(5)) # 5.0
print(int(-10.6)) # -10
print(float('2.5')) # 2.5
print(str(25)) # '25'
print(int(1.5e2)) # 150
#print(int('1p')) # Value error 
print(set([1, 2, 3, 3, 6, 5])) # {1, 2, 3, 5, 6}
print(tuple({5,6,7})) # (5, 6, 7)
print(list('Hello')) # ['H', 'e', 'l', 'l', 'o']

 To convert to dictionary, each element must be a pair:
print(dict([[1, 2], [3, 4]])) # {1: 2, 3: 4}
print(dict([[1, 3], [2]])) # Value error

#------------------------------------------------------------------------------------------
# Type conversion
# int + float = float,,,To avoid data loss

num_int = 123
num_float = 1.23
num_new = num_int + num_float

print("datatype of num_int: ", type(num_int)) # <class 'int'>
print("datatype of num_float: ", type(num_float)) # <class 'float'>
print("Value of num_new: ", num_new) # 124.23
print("Datatype of num_new: ", type(num_new)) # <class 'float'>

# int + string = Type Error
num_int = 123
num_string = "456"

print("Data type of num_int: ", type(num_int)) # Data type of num_int:  <class 'int'>
print("Data type of num_string: ", type(num_string)) # Data type of num_string:  <class 'str'>
print(num_int + num_string) # Type error

#------------------------------------------------------------------------------------------
# It is not allowable to add int value and string value as python is not able to use implicit
# conversion in such conditions. Here, we need (Explicit conversion)

# Addition of int and string values
num_int = 123
num_string = "456"

print("Data type of num_int: ", type(num_int)) # <class 'int'>
print("Data type of num_string: ", type(num_string)) # <class 'str'>

num_string = int(num_string)
print("Data type of num_string after type casting: ", type(num_string)) # <class 'int'>

num_sum = num_int + num_string

print("sum of num_int and num_string: ", num_sum) # 579
print("Data type of the sum: ", type(num_sum)) # <class 'int'>
