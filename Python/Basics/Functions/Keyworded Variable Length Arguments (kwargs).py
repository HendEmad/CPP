def person(name, *data):
    print(name)
    for i in data:
        print(i)


person('Hend', 22, 'Cairo', '012515425454')
# In the function above, we don't know if 28 is the name or the phone, we don't know the variable that the output corresponds to
# This is the core concept of keyword variable length (**kwargs)
# We have to pass the keyword while calling

person('Hend', age=22, city='Cairo', mob='012515425454')
# we will get an error here, we have to pass two stars beside data


def person(name, **data):
    print(name)
    # print(data)
    for i, j in data.items():
        print(i, ":", j)


person('Hend', age=22, city='Cairo', mob='012515425454')