# if statement
# Check if the number given from the user is even or odd
x = int(input("Enter a number: \n"))
r = x % 2;

if r == 0:
    print("Even num.")
if r == 1:
    print("Odd num.")

print("Bye")  # Not belong to if block as it is out of if indentation
 
# If...else statement
x = int(input("Enter a number: \n"))
r = x % 2;

if r == 0:
    print("Even num.")
else:
    print("Odd num.")

print("Bye")  # Not belong to if block as it is out of if indentation

# Nested if
# Check whether the number is even or odd, if even is it greater than 5?
x = int(input("Enter the number: \n"))
r = x % 2

if r == 0:
    print("The number is even")
    if x > 5:
        print("The number is greater than 5")
    else:
        print("The number is smaller than 5")

else:
    print("The number is odd")

print("Bye")

# if...elif...else
# Print 1 if the uset entered 1, 2 if entered 2, 3 if entered 3, 4 if entered 4
x = int(input("ENter your number: \n"))
if x == 1:
    print("ONE")
elif x == 2:
    print("TWO")
elif x == 3:
    print("THREE")
elif x == 4:
    print("FOUR")
else:
    print("GREATER THAN 4")
