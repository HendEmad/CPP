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

    void display(){
        cout << length;
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
    w.display();
    Wall w2(w);
    w2.display();
    Wall w3;
    w3.display();
    Wall w4(w3);
    w4.display();
}