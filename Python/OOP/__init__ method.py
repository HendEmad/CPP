# The idea is that every object has its own methods and all of them are connected to the class with `self`
class computer:
    def __init__(self, cpu, ram):  # as constructor; called automatically for every object
        # print("in init")
        self.cpu = cpu
        self.ram = ram

    @staticmethod
    def config(self):
        print("Config is: ", self.cpu, self.ram)


# initiate 2 objects
comp1 = computer('i5', 16)  # (comp1, 'i5', 16)
comp2 = computer('Ryzen 3', 8)  # (comp2, 'Ryzen 3'. 8)

comp1.config(comp1)  # Config is:  i5 16
comp2.config(comp2)  # Config is:  Ryzen 3 8
