# It is a function without a name
# We can pass a function as an input to another functions which is called 'Higher order functions'
# Keep notice that everything in python is an object included functions
# Lambda is useful in case of using this function once

# Normal expression
def square(a):
    return a ** 2


result = square(5)
print(result)  # 25

# lambda function
# argument: operation
f = lambda a: a ** 2
result = f(10)
print(result)  # 100

# define lambda function to add two numbers
sum = lambda a, b: a + b
ans = sum(5, 10)
print(ans)  # 15

