# NUMERIC LITERALS

a = 0b1010 # Binary
b = 100 # Decimal
c = 0o310 # Octal
d = 0x12c # Hexadecimal

#Float literal
float_1 = 10.5
float_2 = 1.5e2

# Complex literal
x = 3.14j

# Display
print(a, b, c, d)  # 10 100 200 300, all different numbers systems are converted into decimal
print(float_1, float_2) # 10.5 150.0, 1.5e2 = 1.5 * 10^2 = 150.0
print(x, x.imag, x.real) # 3.14j 3.14 0.0

# ------------------------------------------------------------------------------------------------
# STRING LITERALS

strings = "This is Python"
char = "C"
multiline_str = """This is a multiline string with more than one line code."""
unicode = u"\u00dcnic\u00f6de"
raw_str = r"raw \n string"

print(strings) # This is Python
print(char) # C
print(multiline_str) # This is a multiline string with more than one line code.
print(unicode) # Ünicöde
# The string u"\u00dcnic\u00f6de" is a Unicode literal which supports characters other than
# English. In this case, \u00dc represents Ü and \u00f6 represents ö.
print(raw_str) # raw \n string

# ------------------------------------------------------------------------------------------------
# BOOLEAN LITERALS

x = (1 == True) # is 1 = true?
y = (1 == False) # is 1 = false?
a = True + 4
b = False + 10

print("X is ", x) # X is True
print("Y is ", y) # Y is False
print("a: ", a) # a: 5,,,,,,,,,,,,,(1 + 4)
print("b: ", b) # b: 10,,,,,,,,,,,,,(0 + 10)

# ------------------------------------------------------------------------------------------------
# SPECIAL LITERALS
# None --> To specify that the field has not been created

drink = "Available"
food = None

def menu(x):
    if x == drink:
        print(drink)
    else:
        print(food)

menu(drink) # Available
menu(food) # None

# ------------------------------------------------------------------------------------------------
# LITERAL COLLECTION
# Tuple literals, list literals, set literals, dict literals

fruits = ["apple", "mango", "orange"] #list
numbers = (1, 2, 3) #tuple
alphabets = {'a':'apple', 'b':'ball', 'c':'cat'} #dictionary
vowels = {'a', 'e', 'i' , 'o', 'u'} #set

print(fruits) # ['apple', 'mango', 'orange']
print(numbers) # (1, 2, 3)
print(alphabets) # {'a': 'apple', 'b': 'ball', 'c': 'cat'}
print(vowels) # {'o', 'a', 'u', 'e', 'i'}
