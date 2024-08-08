#include <iostream>
using namespace std;

class Entity {
public:
    int x, y;

    Entity() {
        x = 0;
        y = 0;
        cout << "Contructor created" << endl;
    }

    ~Entity() {
        cout << "Destructor created" << endl;
    }

    void print() {
        cout << x << ", " << y << endl;
    }
};

int main() {
    Entity e;
    e.print();
}