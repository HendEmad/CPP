#include <iostream>
using namespace std;

class Wall {
public:
    int length;
    int* length2;

    Wall() {
        length = 10;
    }

    
    Wall(const Wall& w) {
        length = w.length;
        cout << "Copy constructor called: " << endl;
        cout << length << endl;
        length = 5;
        cout << length;
    }

    Wall(int l) {
        length2 = new int(l);
    }

    Wall(const Wall& w2) {
        length2 = new int(*w2.length2);
        cout << "Copy constructor called" << endl;
        cout << *length2 << endl;
        *length2 = 13;
        cout << *length2;
    }
};

int main() {
    Wall w;
    Wall w2(w);
    Wall w3(20);
    Wall w4(w3);
}