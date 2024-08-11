#include <iostream>
template <typename T>

class sharedptr {
private:
    T* resource;
    int* counter;  // count per resource

    void increment_counter(){
        if(counter)  // it can be nullptr
            (*counter)++;
    }

    void decrement_counter() {
        if(counter){
            (*counter)--;
            if((*counter) == 0) {
                if(resource) {
                    delete resource;
                    delete counter;
                    resource = nullptr;
                    counter = nullptr;
                }
            }
        }
    }
public:
    sharedptr(T* ptr = nullptr) : resource(ptr), counter(new int(1)){
        std::cout << "Contructor is called\n";
    }

    sharedptr <T> (const sharedptr <T>& ptr) {
        resource = ptr.resource;
        counter = ptr.counter;
        increment_counter();
    }

    sharedptr <T>& operator= (const sharedptr <T>& ptr) {
        if(this != &ptr) {
            decrement_counter();
            resource = ptr.resource;
            counter = ptr.counter; 
            increment_counter();
        }
        return *this;
    } 

    sharedptr <T> (sharedptr&& ptr) {
        resource = ptr.resource;
        counter = ptr.counter;
        ptr.resource = nullptr;
        ptr.counter = nullptr;
    }

    sharedptr<T>& operator= (sharedptr<T>&& ptr) {
        if(this != &ptr) {
            decrement_counter();
            resource = ptr.resource;
            counter = ptr.counter;
            resource = nullptr;
            counter = nullptr;
        }
        return *this;
    } 

    void reset(T* newresource = nullptr) {
        decrement_counter();
        resource = newresource;
        counter = new int(1);
    }

    int get_count() {
        if(counter)
            return (*counter);
        return -1;
    }

    T* operator-> () {
        return resource;
    }

    T& operator* () {
        return (*resource);
    }

    T* get() {
        return resource;
    }

    ~sharedptr() {
        decrement_counter(); 
    }
};

int main() {
    // requirements
    sharedptr <int> ptr1;  // default constructor
    sharedptr <int> ptr2(new int(10));  // parameterized constructor
    sharedptr <int> ptr3(ptr2);  // copy constructor
    ptr3 = ptr2;  // assignment operator 
    sharedptr <int> ptr4(std::move(ptr1));  // move constructor
    ptr2 = std::move(ptr3);  // move copy assignment operator
    ptr1.reset();
    ptr1.reset(new int(200));
    std::cout << *ptr1;  // *operator overloading
    // ptr1 -> func();  // ->operator constructor
    ptr1.get();  // give the row pointer it points to
    ptr1.get_count(); // number of objects pointing to the same resource

    // destructor to free up the heap memory
}