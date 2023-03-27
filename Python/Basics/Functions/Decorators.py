def div(a, b):
    """
    if a < b:
        a, b = b, a
    """
    print(a / b)


div(4, 2)  # 2.0
div(2, 4)  # 0.5


# If we want to always the numerator be greater than the denominator, if not, then swap them
# we can add a condition in the function that swaps a and b if the b is less than a
# But, what if we don't have access to this function?
# Here is the concept of decorators, where we can change the behaviour of an existing function, without changing the original function itself

def smart_div(func):
    def inner(a, b):
        if a < b:
            a, b = b, a
        return func(a, b)

    return inner


div = smart_div(div)

div(2, 4)  # 2.0
