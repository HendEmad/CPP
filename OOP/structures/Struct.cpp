#include<bits/stdc++.h>
using namespace std;

struct car
{
    string name;
    string color;
    int max_speed;
    int model;
} k;

int main()
{
    car g;  // variable from the struct car data type
    g.name = "BMW";
    g.color = "White";
    g.max_speed = 300;
    g.model = 2023;
    cout << g.name << endl;  // BMW

    // OR
    car g2 = {"Kia", "red", 250, 1996};
    cout << g2.max_speed << endl;  // 250

    k = {"aa", "black", 300, 2009};
    cout << k.color << endl;  // black

    if (g2.model < k.model)
        cout << "g2 is less than k" << endl;  // g2 is less than k

    if (g2.model < k.max_speed)
        cout << "g2 model is less than k max_speed" << endl;


}
