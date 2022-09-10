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
