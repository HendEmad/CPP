## 1. Virtual destructor: 

### Situation:
If we use runtime polymorphism (i.e. use pointer of the base class type to create an object of the derived class), the compiler recognize the actual type of the object at runtime. This is why the correct constructor is called `derived class constructor`. However, when it comes to calling the destructor or any virtual function via a base class pointer, the compiler uses the vtable to determine the correct function to call based on the actual object type.

### What happens internally?

![Virtual destructor visualization](https://github.com/HendEmad/CPP/blob/main/OOP/Destructor/virtualConstructor_and_virtualDestructor/image.png)

### Note:
Declaring a destructor as `virtual` in the base class is only necessary if you intend to use a pointer of the base class type to point to an object of the dervied class. This ensures that when the object is deleted through the base class pointer, the derived class's destructor is called, allowing for proper cleanup of the derived class resources.


## 2. Virtual constructor:
In runtime polymorphism, the compiler creates the vtable if virtual functions or destructor is defined, and when initializes the object, the compiler create vpointer(hidden member) and make it points to the vtable of the class of that object. This is done through the constructor intetrnally. So, ***creating virtual constructor is not available in C++***.