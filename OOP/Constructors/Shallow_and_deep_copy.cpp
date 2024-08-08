#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* m_buffer;
    unsigned int m_size;

public:
    String(const char* string) {
        m_size = strlen(string);
        m_buffer = new char[m_size + 1];
        memccpy(m_buffer, string, m_size, m_size + 1);
    }
    friend ostream& operator<< (ostream& stream, const String& string);
    
    char& operator[] (unsigned int index){
        return m_buffer[index];
    }

    // deep copying using copy constructor
    String(const String& other) : m_size(other.m_size) {
        cout << "Object is copied..." << endl;
        m_buffer = new char[m_size];
        memccpy(m_buffer, other.m_buffer, m_size, m_size + 1);
    }


    ~String() {
        delete[] m_buffer;
    }
};

void printString(const String& string) {
        cout << string << endl;
    }

ostream& operator<<(ostream& stream, const String& string) {
    stream << string.m_buffer;
    return stream;
}

int main() {
    String string = "Hend";  
    String second(string);  
    second[2] = 'b';
    printString(string);  // Hend
    printString(second);  // Hebd
}