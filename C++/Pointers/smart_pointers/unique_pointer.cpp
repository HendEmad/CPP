#include <iostream>
using namespace std;
template <typename T>

class uniqueptr {
private:
    T* resource; // can handle any type, so no increase in size when using unieque pointer

public:
    uniqueptr(T* a = nullptr) : resource(a) {
        cout << "Constructor is called\n";
    }

    // compilation error when using copy constructor  // delete copy constructor
    uniqueptr(const uniqueptr<T>& ptr) = delete;

    // compilation error for copy assignment operator // delete it
    uniqueptr& operator= (const uniqueptr<T>& ptr) = delete;

    // move constructor
    uniqueptr(uniqueptr<T>&& ptr) {  // sending rvalue
        resource = ptr.resource;  // moving ptr resource into object resource
        ptr.resource = nullptr;  // transfer the ownership
    }

    // move assignment operator
    uniqueptr& operator= (const uniqueptr<T>&& ptr) {
        if(this != &ptr){  // handling case ptr4 = ptr4 as this is acceptable
            if(resource) 
                delete resource;  // if ptr was already initialized, we has to delete its resouce before moving new resource to it
            resource = ptr.resource;
            ptr.resource = nullptr;  // transfering the ownership
        }
        return *this;
    }

    T* operator-> () {
        return resource;
    }

    T& operator* () {
        return *resource;
    }

    T* get() {
        return resource;
    }

    void reset(T* newResource = nullptr) {  // don't support multi-threading
    // if this function gets multiple resources, it will crash
    // If we want to support multi-threading, we have to lock here in if condition
        if(resource)
            delete resource;

        resource = newResource;
    }

    ~uniqueptr() {
        if(resource)
            delete resource;
        resource = nullptr;
    }
};

int main() {
    // requirements
    uniqueptr <int> ptr1(new int(2));
    // uniqueptr <int> ptr2(ptr1);  // compilation error
    // uniqueptr <int> ptr3 = ptr1;  // compilation error  // copy constructor
    uniqueptr <int> ptr4(new int(500));
    // ptr4 = ptr3;  // copy assignment operator // compialtion error
    // uniqueptr <int> ptr3 = move(ptr1);  // moving ownership from ptr1 to ptr3 to achieve uniqueptr rule  // move constructor
    // ptr4 = move(ptr3);
    // ptr1 -> func();  // implement arrow operator
    cout << *ptr1;  // print the value of ptr  // implement * operator
    ptr1.get();  // get the resource handled by ptr1
    ptr1.reset(new int(30)); // delete prev. value and reset it to the new one
    // destructor to free up the resource
}