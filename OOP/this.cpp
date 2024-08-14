// It is a pointer points to the object that calls a member function and returns its address.

#include<bits/stdc++.h>
using namespace std;

namespace first_example {
    class stud
    {
    public:
        void address()
        {
            cout << this;
        }
    };

    void run()
    {
        stud s1, s2, s3;
        cout << "The address of s1: ";
        s1.address();
        cout << endl << "The address of s2: ";
        s2.address();
        cout << endl << "The address of s3: ";
        s3.address();
    }
}

namespace example2 {
    class student
    {
        int id;
    public:
        void set_id(int id)
        {
            this -> id = id;
        }

        void print_id()
        {
            cout << "ID is " << id << endl;
        }
    };

    void run()
    {
        student st;
        st.set_id(10);
        st.print_id();  // 10
    }
}

int main() {
    first_example::run();
    example2::run();
}