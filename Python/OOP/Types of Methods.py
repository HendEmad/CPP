class Student:
    # class variable; uses class methods
    school = "Maadi"

    def __init__(self, m1, m2, m3):
        # Instance variables; use instance methods
        self.m1 = m1
        self.m2 = m2
        self.m3 = m3

    # Instance method: Specific for a particular object, one for each object
    def avg(self):
        return (self.m1 + self.m2 + self.m3) / 3

    def get_m1(self):  # getters ==> fetch the values ==> Accessor methods(access)
        return self.m1

    def set_m1(self, val):  # setter ==> modify the values ==> mutator methods
        self.m1 = val

    # Works with class variable
    @classmethod
    def getSchoolName(cls):
        return cls.school

    @staticmethod
    def info():
        print("This is student class and in abc... module")


s1 = Student(24, 56, 45)
s2 = Student(5, 144, 26)

Student.info()  # This is student class and in abc... module
print(s1.avg())  # 41.666666666666664
print(s2.avg())  # 58.333333333333336
print(Student.getSchoolName())
