#include <bits/stdc++.h>
using namespace std;

class Copy
{
private:
    int a1, a2, a3, a4, a5, a6, a7, a8;
public:
    // parameterized constructor; to set values for our attributes
    Copy(int aa1, int aa2, int aa3, int aa4, int aa5, int aa6, int aa7, int aa8)
    {
        a1 = aa1;
        a2 = aa2;
        a3 = aa3;
        a4 = aa4;
        a5 = aa5;
        a6 = aa6;
        a7 = aa7;
        a8 = aa8;
    }

  // Each object has attributes from a1 to a8
  // 3) Copy constructor
  Copy(const Copy &a)
  {
      a1 = a.a1;
      a2 = a.a2;
      a3 = a.a3;
      a4 = a.a4;
      a5 = a.a5;
      a6 = a.a6;
      a7 = a.a7;
      a8 = a.a8;
  }

  void print()
  {
      cout << "a1 = " << a1 << ", " << "a2 = " << a2 << ", " <<
              "a3 = " << a3 << ", " << "a4 = " << a4 << ", " <<
              "a5 = " << a5 << ", " << "a6 = " << a6 << ", " <<
              "a7 = " << a7 << ", " << "a8 = " << a8 << endl;
  }
};

int main()
{
    // initiate object
    Copy g (1, 2, 3, 4, 5, 6, 7, 8);
    g.print();   // a1 = 1, a2 = 2, a3 = 3, a4 = 4, a5 = 5, a6 = 6, a7 = 7, a8 = 8

    Copy h(g);  // pass object to the new object; it will call copy constructor
    // it will take all object `g` attributes and initialize them into the object `h` attributes
    // Which represents the copy concept;

    h.print();  // a1 = 1, a2 = 2, a3 = 3, a4 = 4, a5 = 5, a6 = 6, a7 = 7, a8 = 8

   return 0;
}
