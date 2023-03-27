from numpy import *

# Creating 2d array
arr = array([[1, 2, 3, 6, 2, 9],
             [4, 5, 6, 7, 5, 3]
             ])

print(arr)

# Attributes:
# 1. To know the data type of the array elements
print(arr.dtype)  # int32

# 2. return the dimension of the array
print(arr.ndim)  # 2

# 3. Returns the array shape
print(arr.shape)  # (2, 6)

# 4. The array size elements inside it
print(arr.size)  # 12

# 5. Create an array as our one, but in 1d nnt 2d; conversion from 2d to 1d
arr2 = arr.flatten()
print(arr2)  # [1 2 3 6 2 9 4 5 6 7 5 3]

# Conversion from 1d to 2d matrix
arr3 = arr2.reshape(3, 4)
print(arr3)
# Create a 3d that have two 2d arrays
arr4 = arr2.reshape(2, 2, 3)  # two 2-rows arrays with 3 columns
print(arr4)
'''
[[[1 2 3]
  [6 2 9]]

 [[4 5 6]
  [7 5 3]]]
'''

'''
In mathematics, multi-dimensional array is called 'Matrix'
(1, columns) array ==> row matrix [ex. [1 2 3]]
(rows, 1) array ==> column matrix [ex. [8
                                        4
                                        6
                                        9]]
'''

arrNew = array([[1, 2, 3, 6],
               [4, 5, 6, 7]])
# Convert this 2d array into matrix format
mat = matrix(arrNew)
print(mat)

# This matrix looks same as the original array, but by converting it into matrix, we can perform additional operations on it

# Another way to create a matrix without an array
mat2 = matrix('1 2 3 6 ; 4 5 6 7')
print(mat2)

m1 = matrix('1 2 3 ; 6 4 5 ; 1 6 7')

# Print the diagonal of matrix
print(diagonal(m1))  # [1 4 7]

# print min and max elements of the matrix
print(m1.min())  # 1
print(m1.max())  # 7

# Multiply two matrices
m2 = matrix('1 2 3 ; 6 8 5 ; 2 6 7')
print(m1 + m2)
'''
[[ 2  4  6]
 [12 12 10]
 [ 3 12 14]]
'''

print(m1 * m2)
'''
[[19 36 34]
 [40 74 73]
 [51 92 82]]
'''
