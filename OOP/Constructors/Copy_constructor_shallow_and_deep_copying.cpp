#include <iostream>
using namespace std;

namespace example1{
    class Wall {
    public:
        int length;
        int* length2;

        Wall() {
            length = 10; 
        }

        
        Wall(const Wall& w) {  // shallow copy
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

        Wall(const Wall& w2) {  // deep copy
            length2 = new int(*w2.length2);
            cout << "Copy constructor called" << endl;
            cout << *length2 << endl;
            *length2 = 13;
            cout << *length2;
        }
    };

    void run() {
        Wall w;
        w.display();
        Wall w2(w);
        w2.display();
        Wall w3;
        w3.display();
        Wall w4(w3);
        w4.display();
    }
}

namespace example2 {
    class Segment {
        int* ptr;
        int m_number; 
    public:
        Segment();
        Segment(int* ptr);
        // Segment(const Segment& t);  // copy constructor; shallow copy
        Segment(const Segment& t1);
        // ~Segment();
    };

    Segment::Segment() {
        ptr = new int(0);
        cout << "Default constructor\n";
    }

    Segment::Segment(int* ptr){  // shallow copy
        this -> ptr = ptr;
        cout << "Pointer constructor,,, " << *ptr << endl;   
    }

    Segment::Segment(const Segment& t1) {
        this -> m_number = m_number; 
        // this -> ptr = t1.ptr;  // shallow copy
        int temp = *(t1.ptr);  // getting the value stored in ptr and store it in temp
        this -> ptr = new int(temp);  // creating new memory location for ptr but with the old value.
        cout << "Copy constructor is called\n";
    }

    // Segment::~Segment() {
    //     if(ptr)
    //         delete ptr;
    //     ptr = nullptr;
    //     cout << "Pointer is destroyed,,," << endl;
    // }

    Segment fun() {
        Segment s;
        return s;
    }

    void run() {
        int *ptr = new int(10);
        Segment s(ptr);  // Pointer constructor,,, 10
                        // Pointer is destroyed,,,

        // Segment s2(s);  // copy constructor; shallow copy; bug
        // Segment s2(s);

        Segment s3(fun());  // accepted due to const and &

    }

    /*
    shallow copy
    ----------------
    s1{ptr -> 0xffaa(15), "hello", 10}  --> destructor s1: delete ptr
    s2(s1)  --> s2{copy of s1 data}  --> s2 {ptr -> 0xffaa(15), "hello", 10}
    
    when the destructor for s2 is called, the ptr which is already deleted will be need to be deleted again!
    This will raise segmentation error

    The solution is to differntiate between the address of ptr in both objects,
    ----------
    ptr of s1 in a memory locationa nd ptr of s2 is a different one in another memory location.
    but both have the same value. This is the idea of deep copying. For example:     
                                                    --------------
    s1{ptr -> 0xffaa(15), "hello", 10}
    s2 {ptr -> 0xffbb(15), "hello", 10}

    To implement the deep copy, we have to initiate the copy constructor by ourselves
    */
}

namespace example3 {
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

    void run() {
        String string = "Hend";  
        String second(string);  
        second[2] = 'b';
        printString(string);  // Hend
        printString(second);  // Hebd
    }
}

int main() {
    example1::run();
    example2::run();
    example3::run();
}