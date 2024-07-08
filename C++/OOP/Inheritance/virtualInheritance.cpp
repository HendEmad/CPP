#include<iostream>
#include <string>
using namespace std;

class Animal{
private:
    string species_name;
public:
    Animal(const string& name) : species_name(name) {
        cout << "Animal constructor called." << endl;
    }

    void show_species() const {  // const guarantee that the function will not modify any member variables of the object, during calling
        cout << "This animal belongs to the species: " << species_name << endl;
        // if we try to modify a member variable inside a const member function
        // species_name = "newName"; // compilation error
    }
};

class WingedAnimal : virtual public Animal{
public:
    WingedAnimal(const string& name) : Animal(name) {
        cout << "WingedAnimal constructor called." << endl;
    }
};

class Mammal : virtual public Animal {
public:
    Mammal(const string& name) : Animal(name) {
        cout << "Mammal constructor called." << endl;
    }
};

class Bat : public WingedAnimal, public Mammal {
private:
    string name2;
    int age;
public:    
    Bat(const string& animalName, const string& windgedAnimal, const string& mammal, const string& name, int age) : 
    Animal(animalName), WingedAnimal(windgedAnimal), Mammal(mammal), name2(name), age(age) {}
    void return_age() {
        cout << "The" << this-> name2 << " is " << age << " years old." << endl;
    }
    
};

int main() {
    Bat b("Bird", "Winged bat", "mammal bat", "Bat", 3);
    b.show_species();
    b.return_age();
    return 0;
}

// In case of not using virtual for children classes inheritance:
// When calling `b.Animal::show_species()`, the compiler will rasise a compilation error.
// The compiler doesn't know which `Animal` subobject to use because `Bat` has two `Animal` subobjects (one from `WingedAnimal` and one from `Mammal`).

/*
problem.cpp: In function 'int main()':
problem.cpp:49:15: error: 'Animal' is an ambiguous base of 'Bat'
     b.Animal::show_species();
               ^~~~~~~~~~~~
*/