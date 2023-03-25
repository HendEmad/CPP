# Input with numbers
x = int(input('Enter a value for x: \n'))
y = int(input('Enter a value for y: \n'))
z = x + y
print("The sum is = \n", z)


# Input with strings
ch = input("Enter the string: \n")
print("The input string is: \n", ch)
print("The first character of the inputted string is: \n", ch[0])
# Another way to read the first char of the inputted string

ch2 = input("Enter the string: \n")[0]
print("The first char of the new inputted string is: \n", ch2)

# eval() function
result = eval(input("Enter an expression: \n"))
print("the result of the inputted expression is: \n", result)




