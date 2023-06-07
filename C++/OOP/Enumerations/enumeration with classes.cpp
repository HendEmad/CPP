#include<bits/stdc++.h>
using namespace std;

string da[7] = {"sat", "sun", "mon", "tue", "wed", "thu", "fri"};
enum days {sat=1, sun, mon, tue, wed, thu, fri};

class week
{
    days d[7];
public:
    void setday(days w[])
    {
        for(size_t i = 0; i < 7; i++)
            d[i] = w[i];
    }

    void p()
    {
        for(size_t i = 0; i < 7; i++)
            cout << "The number of day " << da[i] << " = " << d[i] << endl;
    }
};

int main()
{
    days d[7] = {sat, sun, mon, tue, wed, thu, fri};
    week obj1;
    obj1.setday(d);
    obj1.p();
}
