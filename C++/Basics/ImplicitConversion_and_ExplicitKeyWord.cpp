#include <iostream>
using namespace std;

class Entity {
    private:
        string m_name;
        int m_age;
    public:
        Entity(const string& name) : m_name(name) {
            m_age = -1;
        }
        explicit Entity(int age) : m_age(age) {
            m_name = "Unkown";
        }
};

void printEntity(const Entity& entity) {
    cout << " Printing..." << endl;
}

int main() {
    // The compiler can do only one implicit conversion per statement
    // printEntity("Hend");  // error; two conversions required; from char array into string and then from string to Entity
    printEntity(string("hend"));  // done, due to doing one of the required conversions
    // Entity e = 22; // in case of exlicit keyword in the constructor with age parameter, as the compiler must convert from int to string and then from string to Entity
    // Entity e2 = "Hend";  // error, two conversions required; from char array into string and then from string to int
    return 0;
}