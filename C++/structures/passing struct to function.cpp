#include<bits/stdc++.h>
using namespace std;

struct Distance
{
    int feet;
    float inches;
};

Distance add_distance(Distance d1, Distance d2)
{
    Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    return result;
}

int main()
{
    Distance x, y,  z;
    cout << "Enter feet value \n";
    cin >> x.feet >> y.feet;
    cout << "Enter inches value \n";
    cin >> x.inches >> y.inches;

    z = add_distance(x, y);
    cout << "Z feet = " << z.feet << ", and inches = " << z.inches << endl;
}
