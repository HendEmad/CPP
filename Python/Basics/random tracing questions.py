num = input('Enter a new number: ') # 10
num2 = input('enter the 2nd number: ') # 20
sum_num = num + num2
print(sum_num) # 1020,,,,Concatenation
# ------------------------------------------------------------

print(str('2 + 3')) # 2 + 3
print(int('2' + '3')) # 23
print(eval('2 + 3')) # 5
print(int('num + num2')) # error
# ------------------------------------------------------------

x = 'Hello world'
y = {1: 'a', 2: 'b'}
print('H' in x) # True
print('hello' not in x) # True
print(1 in y) # True
print('a' in y) # False
# ------------------------------------------------------------

a = 2
print('id(2) = ', id(2))  # id(2) =  1777302399312
print('id(a) = ', id(a))  # id(a) =  1777302399312

a = 2
print('id(a) = ', id(a))  # id(a) =  1630307182928
print('id(2) = ', id(2))  # id(2) =  2485264869712

a = a + 1
print('id(a) = ', id(a))  # id(a) =  1630307182960
print('id(3) = ', id(3))  # id(3) =  1630307182960

b = 2
print('id(b) = ', id(b))  # id(b) =  1630307182928
print('id(2) = ', id(2))  # id(b) =  1630307182928
# ------------------------------------------------------------

def outer_function():
    b = 20  # local namespace

    def inner_function():
        c = 30  # local namespace


a = 10  # global namespace
#print(c)  # Not defined as it is a local namespace
# ------------------------------------------------------------

def outer_function():
    a = 20

    def inner_function():
        a = 30
        print('a =', a)  # a = 30

    inner_function()
    print('a =', a)  # a = 30


a = 10
outer_function()
print('a =', a)  # a = 10
# ------------------------------------------------------------

def outer_function():
    global a
    a = 20

    def inner_function():
        global a
        a = 30
        print('a =', a)  # a = 30

    inner_function()
    print('a =', a)  # a = 30


a = 10
outer_function()
print('a =', a)  # a = 30
# Here, all references and assignments are to the global a due to the use of keyword global.
# ------------------------------------------------------------

print(range(10))  # range(0, 10)
print(list(range(10)))  # [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
print(list(range(2, 8)))  # [2, 3, 4, 5, 6, 7]
print(list(range(2, 20, 3)))  # [2, 5, 8, 11, 14, 17]


def outer_function():
    a = 5
    def inner_function():
        nonlocal a
        a = 10
        print("Inner function: ",a)  # Inner function: 10
    inner_function()
    print("Outer function: ",a)  # Outerfunction: 10

outer_function()


def outer_function():
    a = 5
    def inner_function():
        a = 10
        print("Inner function: ", a)  # Inner function: 10
    inner_function()
    print("Outer function: ", a)  # Outer function: 5

outer_function()