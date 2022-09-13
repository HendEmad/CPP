# Functions Arguments
# =====================================================================
"""
|1.| Default arguments:
==========================
- In functions, if we pass n arguments into the function, we MUST pass the same arguments' numbers while calling.
- There are two types of arguments:
'Sara' --> Positional argument
name = 'Sara' --> Keyword argument
note 1. While calling the function, the argument must be in the same order of the function building if we will pass positional arguments.
note 2. While calling, In case that we pass keyword argument, the order is not matter.
note 3.1. If we pass default arguments, we must take care that all the arguments right to them must be a default arguments as well.
note 3.2. (NOTE 3 IS ALSO REQUIRED WHILE CALLING FUNCTIONS)
note 4. While calling, If the arguments are mix of keyword and positional arguments, the order is important.
"""
def greet(name, msg="Good morning!"):
    print("Hello", name + ', ' + msg)

greet("Kate")  # Hello Kate, Good morning!
greet("Bruce", "How do you do?")  # Hello Bruce, How do you do? # note 1

def greet(msg = "Good morning!", name): # note 3.1 # ERROR!
    pass

greet(name = "Bruce", msg = "How do you do?")  # Keyword argument
greet(msg = "How do you do?", name = "Bruce")  # note 2
greet("Bruce", msg = "How do you do?")  # note 4
greet(name = "Bruce", "How do you do?")  # note 3.2 # ERROR

# --------------------------------------------------------------------------------------------------------------------
""""
|2.| Arbitrary arguments:
==========================
In case that we don't know number of arguments will be passed to the function
In function definition, we use an asterisk(*) to denote this kind of arguments.
"""
def greet(*names):
    for name in names:
        print("Hello", name)


greet("Monica", "Luke", "Steve", "John")
# Output:
'''
Hello Monica
Hello Luke
Hello Steve
Hello John
'''

# Explanation of arbitrary arguments work:
'''
- The arguments we have passed in calling are wrapped into a tuple before passing into the function.
- Inside the function, we use a for loop to retrieve all arguments back from this tuple.
'''

# Lambda Function
# ==========================================================
double = lambda x: x * 2

# This line is equal to
def double(x):
    return x * 2
print(double(5))

# Lambda function with filter():
# ==================================
my_list = [1, 5, 4, 6, 8, 11, 3, 12]
new_list = list(filter(lambda x: (x % 2 == 0), my_list))
print(new_list)  # [4, 6, 8, 12]
# ---------------------------------------------------------------------------

# **** Variables Scope ****
# Global variable
x = "Global"  # Global variable
def foo():
    print("X inside: ", x)
foo()
print("X outside: ", x)

# Output:
"""
X inside: Global
X outside: Global
"""
# --------------------------------------------------------------------------------------------------
x = "global"
def foo():
    x = x * 2
    print(x)
foo()  # ERROR

# If we want to change x value in the function, we MUST define x as a global variable inside the function.
# Otherwise, python will consider x as local variable.

x = "global"
def foo():
    global x
    x = x * 2
    print(x)
foo()  # globalglobal
# --------------------------------------------------------------------------------------------------------

# Local variable
def foo():
    y = "local"
foo()
print(y)  # ERROER, Y is local variable inside the function only
# --------------------------------------------------------------------------------------------------------
def foo():
    y = "local"  # Local variable
    print(y)
foo()  # local
# --------------------------------------------------------------------------------------------------------

# Global and local variables inside one code
x = "global"

def foo():
    global x
    y = "local"
    x = x * 2
    print(x)
    print(y)

foo()

# Output:
"""
globalglobal
local
"""
# --------------------------------------------------------------------------------------------------------

# Global variable and Local variable with same name
x = 5
def foo():
    x = 10
    print("local x: ", x)

foo()
print("Global x: ", x)

# Output:
"""
local x: 10
global x: 5
"""
# --------------------------------------------------------------------------------------------------------

# Nonlocal variable:
"""
- Nonlocal variables are used in nested functions whose local scope is not defined.
- It makes the inner function visible to the outer function
-  If we change the value of a nonlocal variable, the changes appear in the local variable.
"""
def outer():
    x = "local"

    def inner():
        nonlocal x
        x = "nonlocal"
        print("Inner: ", x)

    inner()
    print("Outer: ", x)

outer()
# Output:
"""
Inner:  nonlocal
Outer:  nonlocal
"""
# --------------------------------------------------------------------------------------------------------

# *** Random tracing questions ***
def outer():
    x = "local"

    def inner():
        global x
        x = "nonlocal"
        print("Inner: ", x)

    inner()
    print("Outer: ", x)

outer()
# Output:
"""
Inner:  nonlocal
Outer:  local
"""
# --------------------------------------------------------------------------------------------------------
def outer():
    x = "local"

    def inner():
        x = "nonlocal"
        print("Inner: ", x)

    inner()
    print("Outer: ", x)

outer()

# Output:
"""
Inner:  nonlocal
Outer:  local
"""
# --------------------------------------------------------------------------------------------------------
def outer():
    x = "local"

    def inner():
        nonlocal x
        x = "nonlocal"
        x = "123"
        print("inner:", x)

    inner()
    print("outer:", x)


outer()
# Output:
"""
inner: 123
outer: 123
"""
# --------------------------------------------------------------------------------------------------------
def foo():
    x = 20

    def bar():
        global x
        x = 25
        print(x)

    print("Before calling bar: ", x)  # 20
    print("Calling bar now")
    bar()  # 25
    print("After calling bar: ", x)  # 20


foo()
print("x in main: ", x)  # 25
# --------------------------------------------------------------------------------------------------------
