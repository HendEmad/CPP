#include<bits/stdc++.h>
using namespace std;
namespace example1{
    void ex1()
    {
        int hour;
        try
        {
            cin >> hour;
            if (int(hour) < 0 || int(hour) > 12)
                throw string("error, the hour is not right!");  // throw "error, the hour is not right!";
            cout << "The time now is " << hour << ":00" << endl;
        }
        catch(string str)  // catch(const char* str)
        {
            cout << "Exception: " << str;
        }
    }
}

namespace example2 {
    void ex2()
    {
        int answer = 0;
        cout << "5 + 7 = " << endl;
        try
        {
            cin >> answer;
            if (answer != 12)
                throw string("Wrong answer, try again...\n");
            cout << "Right answer, bravoo..." << endl;
        }

        catch(string str)
        {
            cout << "Exception: " << str;
        }
    }
}

namespace example3 {
    void ex3()
    {
        int a[10] = {2, 3, 4, 1, 3, 5, 6, 8, 9};
        int index;
        cout << "Enter the index:" << endl;
        try
        {
            cin >> index;
            if (index < 0)
                throw string("Not allowed index...\n");
            if (index >= 10)
                throw index;
            cout << "Index " << index << " contains " << a[index];
        }
        catch (string str)
        {
            cerr << "Exception: " << str;
        }
        catch (int i)
        {
            cerr << "Exception: index " << i << " is out of range..." << endl;
        }
    }
}

int main() {
    example1::ex1();
    example2::ex2();
    example3::ex3();
}