# 1: List comprehension with for loop
print("Program 1")
a = [x for x in range(1, 11, 1)]
print(a)  # [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

# 2: List comprehension with single if condition
print("Program 2")
lst = [x for x in range(1, 11, 1) if x > 4]
print(lst)  # [5, 6, 7, 8, 9, 10]

# 3: List comprehension with nested if
print("Program 3")
lst = [x for x in range(1, 11, 1) if x > 4 if x %2 == 0]
print(lst)  # [6, 8, 10]

# 4: List comprehension with single if..else conditions
print("Program 4")
lst = [x if x > 4 else 'less than 4' for x in range(1, 11, 1)]
print(lst)
# ['less than 4', 'less than 4', 'less than 4', 'less than 4', 5, 6, 7, 8, 9, 10]

# 5: List comprehension with if..elif..if
print("Program 5")
lst = ['Two' if x%2 == 0 else 'Three' if x % 3 == 0 else 'not 2 $ 3'
       for x in range(1, 11, 1)]
print(lst)
# ['not 2 $ 3', 'Two', 'Three', 'Two', 'not 2 $ 3', 'Two', 'not 2 $ 3',
#  'Two', 'Three', 'Two']

# 6: List comprehensions with nested if
print("Program 6")
x_ = [1, 2, 3]
y_ = [3, 2, 1]
pair = [(x, y) for x in x_ for y in y_]
print(pair)
# [(1, 3), (1, 2), (1, 1), (2, 3), (2, 2), (2, 1), (3, 3), (3, 2), (3, 1)]

# 7.1: Transpose of matrix using nested loops
print("Program 7.1")
transposed = []
matrix = [[1, 2, 3, 4], [4, 5, 6, 8]]
for i in range(len(matrix[0])):
    transposed_row = []
    for row in matrix:
        transposed_row.append(row[i])
    transposed.append(transposed_row)
print(transposed)

# 7.2: Transpose of matrix using list comprehension
print("Program 7.2")
matrix = [[1, 2, 3, 4], [4, 5, 6, 8]]
transposed = [[row[i] for row in matrix] for i in range(len(matrix[0]))]
print(transposed)
# [[1, 4], [2, 5], [3, 6], [4, 8]]
