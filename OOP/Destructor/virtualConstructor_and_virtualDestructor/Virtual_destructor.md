If we use runtime polymorphism (i.e. use pointer of the base class type to create an object of the derived class), the compiler recognize the actual type of the object at runtime. This is why the correct constructor is called `derived class constructor`. However, when it comes to calling the destructor or any virtual function via a base class pointer, the compiler uses the vtable to determine the correct function to call based on the actual object type.

What happens internally?

![Virtual destructor visualization]()