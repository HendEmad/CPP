class computer:
    def __init__(self):
        self.name = "Hend"
        self.age = 22

    def update(self):
        self.age = 30


c1 = computer()
c2 = computer()

c1.name = "salma"
c1.age = 25

c1.update()

print(c1.name)  # Salma
print(c2.name)  # Hend
print(c1.age)  # 30

'''
print(id(c1))  # 2399167296896
print(id(c2))  # 1825126857120
'''


# Comparing two objects
class computer:
    def __init__(self):
        self.name = "Hend"
        self.age = 22

    def update(self):
        self.age = 32

    def compare(self, c3):  # c1 becomes self, and c2 becomes c2
        if self.age == c3.age:
            return True
        else:
            return False


c4 = computer()
c3 = computer()

c4.update()

if c4.compare(c3):
    print("same")
else:
    print("Different")

print(c1.name)
print(c2.name)
print(c1.age)
print(c2.age)
