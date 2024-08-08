#include <iostream>
#include <cstring>
using namespace std;

class LCD {
public:
    string name;
    char* text;  // array of characters

    LCD();  // default constructor
    ~LCD();  // destructor
    LCD(string name, const char* text);  // parameterized constructor
    LCD(const LCD &temp);  // copy constructor
    LCD(LCD &&temp);  // move constructor
};

LCD::LCD() {
    cout << "Default\n";
}

LCD::LCD(const LCD &temp) {  // copy cosntructr implementation
    cout << "Copy\n";
    this -> name = temp.name;  // string has copy constructor implemented inside its class, handling = operator overloading
    this -> text = new char[strlen(temp.text)];
    strcpy(this -> text, temp.text);
}

LCD::LCD(LCD &&temp) {  // move constructor implementation
    // string has move constructor implemented inside it
    this -> name = move(temp.name);
    this -> text = temp.text;
    temp.text = nullptr;
}

LCD::LCD(string name, const char* text) {
    this -> name = name;  
    // deep copy
    this -> text = new char[strlen(text)];
    strcpy(this -> text, text);  
}

LCD::~LCD(){
    if (this -> text)
        delete [] this -> text;
}

int main() {
    LCD lcd1("My LCD", "Hello world"); 
    LCD lcd2(lcd1);  // copy
    lcd1.name = "LCD 1";
    cout << lcd1.name << " " << lcd1.text << endl;  // LCD1 Hello world 
    cout << lcd2.name << " " << lcd2.text << endl;  // My LCD Hello world
    // As the copy cosntructor of lcd1 and lcd2 is deep copying, so the change
    // in lcd1 name will not reflect the lcd2 name.

    // using move constructor
    LCD lcd3("LCD 3", "move constructor");
    LCD lcd4(move(lcd3));
    lcd3.name = "New LCD";
    cout << lcd4.name << " " << lcd4.text << endl;
    cout << "end1\n";
    cout << lcd3.name << " " << lcd3.text <<endl;
    cout << "end2\n";
    cout << lcd4.name << " " << lcd4.text <<endl;

    return 0;
}