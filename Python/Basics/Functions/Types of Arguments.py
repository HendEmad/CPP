def add(a, b):
    c = a + b
    print(c)


add(5, 6)  # 11

'''
In the previous function, a & b are called 'Formal arguments'
5 & 6 are called 'Actual arguments'

Actual arguments have four types:
1. Position
2. Keyword
3. Default
4. Variable length
'''


# 1. Position
# While passing arguments in calling, we have to take care of the position of each passed argument,
# this has to have the same order
def person(name, age):
    print(name)  # Hend
    print(age)  # 22


person('Hend', 22)


# 2. Keyword
def person(name, age):
    print(name)
    print(age - 5)


person(name='Hend', age=22)  # Hend \n 17


# 3. Default
def person(name, age=18):
    print(name)
    print(age)


person('Hend')  # Hend \n 18


# 4. Variable length
# In case of adding more than 2 values, may be 8 may be 11, etc...
# Create a function where the number of arguments is not fixed
# Here, the first argument is confirmed, but the second one is not
# This means that we have to pass at least one argument, the 2nd one is optional
def sum(a, *b):  # *b refers to the ability to hold multiple values
    print(a)  # 5
    print(b)  # (6, 2, 3, 1)
    # Add number to tuple
    c = a
    for i in b:
        c += i
    print(c)  # 17 (5 + 6 + 2 + 3 + 1 = 17)


sum(5, 6, 2, 3, 1)  # 5 is assigned to a, the next params are assigned to b[as a tuple]


# Another more efficient way
def sum(*a):
    sum = 0
    for i in a:
        sum += i
    print(sum)


sum(1, 0, 3, 4, 5, 10)  # 23
