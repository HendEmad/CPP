from array import *

arr = array('i', [])
n =int(input("Please enter the length of your array: "))
for i in range(n):
    val = int(input("Please enter element: "))
    arr.append(val)
print(arr)

# search for an element inside the array manually
val = int(input("Enter the value to search: "))
for i in range(len(arr)):
    if (val == arr[i]):
        print("value you are searching is found in index #", i)
        break
else:
    print("not found")

# another manual way of searching
val = int(input("Enter the value to search: "))
iterator = 0
for i in arr:
    if val == i:
        print("value you are searching is found in index #", iterator)
        break;
    iterator += 1

# search for an element inside the array using the built in funciton
val = int(input("Enter the value to search: "))
print("value you are searching is found in index #", arr.index(val))
