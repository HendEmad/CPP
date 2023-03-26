# 1: print:
'''
# # # #
# # # #
# # # #
# # # #
'''
print("Program 1")
for i in range(4):
    for j in range(4):
        print("#", end = " ")
    print()


# 2: 
'''
#
# #
# # #
# # # #
'''
print("Program 2", end = " ")
for i in range(5):
    for j in range(i):
        print("#", end = " ")
    print()


# 3:
'''
# # # #
# # #
# #
#
'''
print("Program 3")
import math
for i in range(4):
    for j in range (4, i, -1):
        print("#", end = " ")
    print()

# 4.1: print if a given number is a prime number
# It is the number that is divisible only by 1 and itself (2, 3, 7, 13, 19, ..)
print("Program 4.1")
num = int(input("Enter the number: "))
max_num = math.floor(math.sqrt(num))
for i in range(2, 1 + max_num):
    if num % i == 0:
        print("Not prime")
        break
else:
    print("Prime")

# The thing to notice is that all the even numbers except two
# can not be prime number.
print("Program 4.2")
num = int(input("Enter the number: "))
max_num = math.floor(math.sqrt(num))
for i in range(2, 1 + max_num, 2):
    if num % i == 0:
        print("Not prime")
        break
else:
    print("Prime")
