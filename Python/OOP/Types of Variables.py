class Car:
    # Static/ Class/ Object variables, definition is outside the init function,
    # Common for all objects, any change in it affects all the objects.
    wheels = 4

    def __init__(self):
        # Instance variables: specific for each object
        self.mil = 10
        self.com = "BMW"


c1 = Car()
c2 = Car()

# Change the value of instance variable
c1.mil = 8

# Change the value of class variable
Car.wheels = 5

print(c1.com, c1.mil, c1.wheels)
print(c2.com, c2.mil, c2.wheels)
