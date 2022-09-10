# Indentation error
It occurs in case of incorrect indentation.
### Code with correct indentation:
```
for i in range(1,11):
    print(i)
    if i == 5:
        break
```

### Code with incorrect indentation:
```
for i in range(1,11):
  print(i)
    if i == 5:
    break
```
-----------------------------------------------------------------------------------------------------------------------
# DocStrings
- The short for documentation string.
- It always appear after the degination of function, class, module, or method.
- It can be printed using `.__doc__` .

### EX:
```
def double(num):
    """Function to double the value"""
    return 2*num
print(double.__doc__)
```

### Output
```
Function to double the value
```
-------------------------------------------------
# Notes
1. Python is a `type-inferred` language, which means that we don't have to define the variable type. It automatically can know its type.

2. Constants are usually be declared in a separated file as a module. For example:

- Create the constants module(.py):
```
PI = 3.14
GRAVITY = 9.8
```

- Create the main.py:
```
import constant

print(constant.PI)
print(constant.GRAVITY)
```

Output:
```
3.14
9.8
```

3. In reality, we don't use constants in Python. Naming them in all capital letters is a convention to separate them from variables, however, it does not actually prevent reassignment.
-----------------------------------------------

