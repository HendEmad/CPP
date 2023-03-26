########## While loop ##########
# Program 1
i = 1  # Initialization
while i <= 10:  # Condition
    print("Loop #", i)
    i += 1  # Increament

# Program 2
i = 5
j = 1
while i >= 1:
    print("Python", end=" ")
    while(j <= 4):
        print("Rocks", end=" ")
        j += 1
    i -= 1
    print()

# Program 3
i = 5
while i >= 1:
    print("Python", end=" ")
    j = 1
    while(j <= 4):
        print("Rocks", end=" ")
        j += 1
    i -= 1
    print()


########### For loop ##########
# 1: Loop over a list
print("PROGRAM 1")
list = ['Laila', 65, 2.5]
for i in list:
    print(i)

# 2: Loop over a string
print("PROGRAM 2")
x = 'Laila'
for i in x:
    print(i)

# 3:
print("PROGRAM 3")
for i in [2, 6, 'Point']:
    print(i)

# 4: Print numbers from 1 to 10
print("PROGRAM 4")
for i in range(1, 11, 1):  # range(start, end+1, iteration)
    print(i)

# 5: print numbers from 20 to 10
print("PROGRAM 5")
for i in range (20, 10, -1):  # We have to specify "-1"; as it always prints in ascending order
    print(i)

# 6: print numbers from 1 to 20, numbers which are divisible by 5 will not be printed
print("PROGRAM 6")
for i in range(1, 21):
    if i % 5 == 0:
        continue
    print(i)
    
# OR
for i in range(1, 21):
    if i % 5 != 0:
        print(i)

# 7.1: for...else: check if a list have a number that is divisible by 5
print("PROGRAM 7.1")
nums = [12, 15, 18, 21, 26, 25]
for num in nums:
    if num % 5 == 0:
        print(num)

print("PROGRAM 7.2")
nums = [12, 15, 18, 21, 26, 25]
for num in nums:
    if num % 5 == 0:
        print(num)
        break
        
print("PROGRAM 7.3")
nums = [12, 16, 18, 21, 26]
for num in nums:
    if num % 5 == 0:
        print(num)
        break
    else:
        print("Not found")

print("PROGRAM 7.4")
nums = [10, 16, 18, 21, 26]
for num in nums:
    if num % 5 == 0:
        print(num)
        break
else:
    print("Not found")
