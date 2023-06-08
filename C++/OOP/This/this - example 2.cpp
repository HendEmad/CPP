#include<bits/stdc++.h>
using namespace std;

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

int main()
{
    student st;
    st.set_id(10);
    st.print_id();
    return 0;
}
