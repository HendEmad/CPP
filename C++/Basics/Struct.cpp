#include<bits/stdc++.h>
using namespace std;

//struct --> a new data type --> used defined data type
struct car
{
    //attributes
    string name;
    string color;
    int maxSpeed;
    int model;
};

//******STRUCT TO FUNCTION*******
//print structure
void f(car f)
{
    cout << "F Name: " << f.name << endl;
    cout << "F Color: " << f.color << endl;
    cout << "F Max. speed = " << f.maxSpeed << endl;
    cout << "F Model = " << f.model << endl;
}

//function returns struct type
car readReturn(car &s)
{
    cout << "Enter name: " << endl;
    cin >> s.name;
    cout << "Enter color: " << endl;
    cin >> s.color;
    cout << "Enter max. speed: " << endl;
    cin >> s.maxSpeed;
    cout << "Enter model: " << endl;
    cin >> s.model;

    return s;
}

int main()
{

    car y = {"BMW", "Blue", 250, 2016};  //attributes' order is must

    cout << "***CAR X***" << endl;
    car x;
    //pass values to the attributes of the car
    x.name = "Rolls-Royce";
    x.color = "Red";
    x.model = 2019;
    x.maxSpeed = 270;

    cout << "X Name = "<< x.name << endl;
    cout << "---------------------------------------" << endl;

    cout << "***CAR Y***" << endl;
    cout << "Y Color = " << y.color << endl;
    cout << "---------------------------------------" << endl;

    //initialize struct inside new struct
    cout << "initialize struct inside new struct" << endl;
    car z = y;
    cout << "Z Max. speed = " << z.maxSpeed << endl;
    cout << "---------------------------------------" << endl;

    //Function
    cout << "FUNCTION" << endl;
    car v = {"No name", "Red", 100, 200};
    f(v);
    cout << "---------------------------------------" << endl;

    //funciton 2
    cout << "FUNCTION 2" << endl;
    car s;
    readReturn(s);
    car h;
    h = s;
    cout << "H name: " << h.name << endl;
    cout << "---------------------------------------" << endl;

    //pointer to struct
    car *e;
    car q = {"A", "C", 200, 2000};
    e = &q;
    cout << "H color: " << e -> color << endl;
    return 0;
}
