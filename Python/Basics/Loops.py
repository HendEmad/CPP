# ************* FOR LOOP *****************

# Iterate through a list using indexing
genre = ['pop', 'rock', 'jazz']

for i in range(len(genre)):
    print("I like ", genre[i])

# Output
'''
I like pop
I like rock
I like jazz
'''
# ----------------------------------------------------------------------------

# For loop with else
digits = [0, 1, 5]
for i in digits:
    print(i)
else:
    print("No items left.")

# Output
'''
0
1
5
No items left.
'''
# ----------------------------------------------------------------------------
# In case of (break statement existence),
# If the break statement is executed, else statement will be ignored
# Otherwise, the else will be executed

student_name = 'Soyuj'
marks = {'James': 90, 'Jules': 55, 'Arthur': 77}
for student in marks:
    if student == student_name:
        print(marks[student])
        break
else:
    print("No entry with that name found.")

# Output:
# No entry with that name found.
# ----------------------------------------------------------------------------

# ******* WHILE LOOP ***************


# Program to add natural numbers up to n
n = int(input("Enter n: "))
sum = 0
i = 1
while i <= n:
    sum += i
    i += 1
print("The sum is = ", sum)
# Output: The sum is = 55
# ----------------------------------------------------------------------------

counter = 0
while counter < 3:
    print("Inside loop")
    counter += 1
else:
    print("Inside else")

# Output:
'''
Inside loop
Inside loop
Inside loop
Inside else
'''
# ----------------------------------------------------------------------------


# ********* Break statement **********

for val in "string":
    if val == "i":
        break
    print(val)
print("The end")

# Output:
'''
s
t
r
The end
'''
# ----------------------------------------------------------------------------


# ********* Continue statement *************
for val in "string":
    if val == "i":
        continue
    print(val)
print("The end")

# Output:
'''
s
t
r
n
g
The end
'''
# ----------------------------------------------------------------------------


# ******** Pass statement ********
# We use it as a placeholder
# We use it to take a place of a function/loop/class that has nobody, but will have in the future.
# If we try to run the code without their bodies, we will get an error
# So, we use pass to take a place of them without errors.

sequence = {'p', 'a', 's', 's'}
for val in sequence:
    pass


# Another examples:
def function(args):
    pass


class Example:
    pass
