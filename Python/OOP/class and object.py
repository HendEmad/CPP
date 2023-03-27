class computer:
    # The class includes: attributes(variables) and behaviour(methods/functions)
    def config(self):  # self is the object we are passing
        print("This is i5 machine, 16gb, 1TB")


# Get an object from the computer class
# Constructor
comp1 = computer()
# print(type(comp1))  # <class '__main__.computer'> (comp1 is an object from computer class)
comp2 = computer()
'''
computer.config(comp1)  # This is i5 machine, 16gb, 1TB
computer.config(comp2)  # This is i5 machine, 16gb, 1TB
'''

# most used formula
comp1.config()  # This is i5 machine, 16gb, 1TB
comp2.config()  # This is i5 machine, 16gb, 1TB
