from numpy import *

# Add 5 to each element
arr = array([1, 2, 3, 4, 5])
# arr = arr + 5
print(arr)  # [ 6  7  8  9 10]

# Vectorized operation: Adding two different arrays
arr1 = array([1, 2, 3, 4, 5])
arr2 = array([6, 1, 9, 3, 2])
arr3 = arr1 + arr2
print(arr3)  # [ 7  3 12  7  7]

# We can perform different mathematical operations on numpy arrays
print(sin(arr))  # [ 0.84147098  0.90929743  0.14112001 -0.7568025  -0.95892427]
print(cos(arr))  # [ 0.54030231 -0.41614684 -0.9899925  -0.65364362  0.28366219]
print(log(arr))  # [0.         0.69314718 1.09861229 1.38629436 1.60943791]
print(sqrt(arr))  # [1.         1.41421356 1.73205081 2.         2.23606798]
print(sum(arr))  # 15
print(min(arr))  # 1
print(max(arr))  # 5
print(unique(arr))
print(sort(arr))

# Concatenate 2 arrays
print(concatenate([arr1, arr2]))  # [1 2 3 4 5 6 1 9 3 2]

# Copy an array
# 1. Aliasing
arrCopy = arr
print(arrCopy)  # [1 2 3 4 5]
print(arr)  # [1, 2, 3, 4, 5]
print(id(arr))  # 2861319854128
print(id(arrCopy))  # 2861319854128
# We can notice that the two arrays have the same address, so there are only one array in the memory
# This means that the both variables point to the same array

# 2. Shallow copy: both of the array are dependent on each other, if we change anything in arr, arrCopy will be changed as well
# Creating two different arrays with different addresses
arr_diff = arr.view()
print(id(arr_diff))  # 2395786429616
print(id(arr))  # 2395526076560

print(arr_diff)  # [1 2 3 4 5]
print(arr)  # [1 2 3 4 5]

arr[1] = 7
print(arr)  # [1 7 3 4 5]
print(arr_diff)  # [1 7 3 4 5]

# 3. Deep copy: The two arrays don't dependent on each other
arr_diff_deep = arr.copy()
print(id(arr_diff_deep))  # 2329436735696
print(id(arr))  # 2329164978224

print(arr_diff_deep)  # [1 7 3 4 5]
print(arr)  # [1 7 3 4 5]

arr[0] = 6
print(arr) # [6 7 3 4 5]
print(arr_diff_deep)  # [1 7 3 4 5]