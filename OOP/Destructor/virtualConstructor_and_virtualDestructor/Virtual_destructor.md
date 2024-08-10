### Situation:
If we use runtime polymorphism (i.e. use pointer of the base class type to create an object of the derived class), the compiler recognize the actual type of the object at runtime. This is why the correct constructor is called `derived class constructor`. However, when it comes to calling the destructor or any virtual function via a base class pointer, the compiler uses the vtable to determine the correct function to call based on the actual object type.

### What happens internally?

![Virtual destructor visualization](https://github.com/HendEmad/CPP/blob/main/OOP/Destructor/virtualConstructor_and_virtualDestructor/image.png)

### Note:
Declaring a destructor as `virtual` in the base class is only necessary if you intend to use a pointer of the base class type to point to an object of the dervied class. This ensures that when the object is deleted through the base class pointer, the derived class's destructor is called, allowing for proper cleanup of the derived class resources.s