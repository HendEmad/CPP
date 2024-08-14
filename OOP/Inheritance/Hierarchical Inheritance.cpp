#include <iostream>
using namespace std;

class Animal {
public:
    void info() {
        cout << "I am an animal" << endl;
    }
};

class Dog : public Animal {
public:
    void dog_info() {
        cout << "I am a dog." << endl;
    }
};

class Cat : public Animal{
public:
    void cat_info() {
        cout << "I am a cat." << endl;
    }
};

int main() {
    Dog d;
    d.info();
    d.dog_info();

    Cat c;
    c.info();
    c.cat_info();
    return 0;
}