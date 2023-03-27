# The task is to count the even and odd numbers in an array
# The function will take a list and return a list as well
# even, odd = count(list)

# Taking the list elements from the user
input_string = input("Enter a list element separated by space ")
list = input_string.split()
lst = [eval(i) for i in list]


def count(lst):
    even, odd = 0, 0
    for i in lst:
        if i % 2 == 0:
            even += 1
        else:
            odd += 1
    return [even, odd]


out_lst = count(lst)
print("even count = ", out_lst[0], ", and odd count = ", out_lst[1])
