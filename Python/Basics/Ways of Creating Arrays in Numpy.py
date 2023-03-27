from numpy import *

# 1.array() ==> no need to specify its type #
arr = array([1, 2, 3, 4, 5])
print("The arr elements: ", arr)  # [1 2 3 4 5]
print("The type of arr is: ", arr.dtype)  # int32

arr2 = array([1, 2, 3, 4, 5.0])
print("The arr2 elements: ", arr2)  # [1. 2. 3. 4. 5.]
print("The type of arr2 is: ", arr2.dtype)  # float64

# we can specify the type of array:
arr3 = array([1, 2, 3, 4, 5], int)
print("The arr3 elements: ", arr3)  # [1 2 3 4 5]
print("The type of arr3 is: ", arr3.dtype)  # int32

arr4 = array([1, 2, 3, 4, 5], float)
print("The arr4 elements: ", arr4)  # [1. 2. 3. 4. 5.]
print("The type of arr4 is: ", arr4.dtype)  # float64

# 2. linspace(start, stop, no.of parts of division) ==> divides the range of start to stop into n parts #
# the stop value is included
# it will break the values between (start) and (stop) into (step) parts
# All the values returned are float
arr = linspace(0, 15, 16)
print(arr)  # [ 0.  1.  2.  3.  4.  5.  6.  7.  8.  9. 10. 11. 12. 13. 14. 15.]

arr2 = linspace(0, 15, 5)
print(arr2)  # [0.  3.75  7.5  11.25  15.]

# In case of not specifying the no of parts, it will divide the numbers into stop parts
arr3 = linspace(0, 15)
print(arr3)
'''
[ 0.          0.30612245  0.6122449   0.91836735  1.2244898   1.53061224
  1.83673469  2.14285714  2.44897959  2.75510204  3.06122449  3.36734694
  3.67346939  3.97959184  4.28571429  4.59183673  4.89795918  5.20408163
  5.51020408  5.81632653  6.12244898  6.42857143  6.73469388  7.04081633
  7.34693878  7.65306122  7.95918367  8.26530612  8.57142857  8.87755102
  9.18367347  9.48979592  9.79591837 10.10204082 10.40816327 10.71428571
 11.02040816 11.32653061 11.63265306 11.93877551 12.24489796 12.55102041
 12.85714286 13.16326531 13.46938776 13.7755102  14.08163265 14.3877551
 14.69387755 15.        ]
'''

# 3. arange(start, stop, step) ==> same as range() #
arr = arange(1, 15, 2)
print(arr)  # [ 1  3  5  7  9 11 13]

# 4. logspace() ==> divides the range of 10**start to 10**stop into n parts #
arr = logspace(1, 40, 5)
print(arr)
# [1.00000000e+01 5.62341325e+10 3.16227766e+20 1.77827941e+30 1.00000000e+40]
# 1.00000000e+01 = 10 ** 1 and 1.00000000e+40 = 10 ** 40
# print numbers without `e`
print('%.2f' % arr[0])  # 10.00
print('%.2f' % arr[4])  # 10000000000000000303786028427003666890752.00

# 5. zeros()  ==> create an array of zeros
arr = zeros(5)  # create an array of 1*5 size
print(arr)  # [0. 0. 0. 0. 0.]

arr2 = zeros(5, int)
print(arr2)  # [0 0 0 0 0]

# 5. ones() ==> create an array of ones
arr3 = ones(5)
print(arr3)  # [1. 1. 1. 1. 1.]

arr4 = ones(5, int)
print(arr4)  # [1 1 1 1 1]
