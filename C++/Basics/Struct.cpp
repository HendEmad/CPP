#include <bits/stdc++.h>
using namespace std;

//********************PART 2********************
struct car
{
    // Attributes
    string name;
    string color;
    int maxSpeed;
    int model;
};

//********************PART 3********************
void f(car f)
{
    cout << "Name: " << f.name << endl;
    cout << "Color: " << f.color << endl;
}

//********************PART 4 & PART 6********************
car PART4(car s)
{
    cout << "Enter the name of the preferred car: "<< endl;
    cin >> s.name;
    cout << "Enter the color of the preferred car: "<< endl;
    cin >> s.color;
    cout << "Enter the max speed of the preferred car: "<< endl;
    cin >> s.maxSpeed;
    cout << "Enter the model of the preferred car: "<< endl;
    cin >> s.model;
    return s;
}

//********************PART 5********************
struct CAR
{
    string name;
    string color;
    int maxSpeed;
    int model;
    void FUN(CAR n)
    {
        cout << "Car name: " << n.name << endl;
    }
};

//********************PART 7********************
struct student
{
    int id;
    fullName name;
};
struct fullName
{
    string first_name;
    string last_name;
};


int main()
{
    //********************PART 1********************
    car x;
    // create initial values for car x
    x.name = "Rolls-royce";
    x.color = "Red";
    x.model = 2019;
    x.maxSpeed = 270;
    cout << "Car x name : " << x.name << endl;  // Rolls-royce

    // Another way for creating initial values for car x
    car y = {"BMW", "Blue", 250, 2016};  // the order of elements are **MUST**
    //cout << y[0] << endl;  // ERROR, NOT ALLOWED
    cout << "Car y color : " << y.color << endl;  // Red

    // Assign an strct to another struct ; ASSIGNMENT
    // Assign y into z
    car z = y;
    cout << y.name << endl;  // BMW


    //********************PART 2*********************
    // Compare between two structs
    car x = {"BMW", "Blue", 250, 2016};
    car y = {"Mercedes", "Black", 300, 2016};

    // if (x >= y)  // ERROR
    // When comparing between two structs, we should compare each element alone
    if (x.maxSpeed > y.maxSpeed)
        cout << "X is greater than y" << endl;
    else
        cout << "Y is greater than x" << endl;  // Y is greater than x

    if (x.maxSpeed > y.model)
        cout << "X is greater than y" << endl;
    else
        cout << "Y is greater than x" << endl;  // Y is greater than x


    //********************PART 3********************
    // Passing struct to function
    car v = {"No name", "White", 100, 2020};
    f(v);  // No name \n White


    //********************PART 4********************
    // Taking the struct input from the user and return the struct inputted
    car x;
    car h;
    h = PART4(x);
    cout << "Preferred name: " << h.name << endl;  // Inputted name
    cout << "Preferred color: " << h.color << endl;  // Inputted color
    cout << "Preferred max speed: " << h.maxSpeed << endl;  // Inputted maxspeed
    cout << "Preferred model: " << h.model << endl;  // Inputted model


    //********************PART 5********************
    // Declaring function inside struct
    CAR h = {"Kia"};
    h.FUN(h);  // Kia


    //********************PART 6********************
    // Pointer of struct
    car *h;
    car b = {"A", "C", 300, 2011};
    h = &b;
    cout << "Car color: " << h -> color << endl;  // C


    //********************PART 7********************
    // Struct inside struct
    student a;
    a.name.first_name = "Hend";
    a.name.last_name = "Emad";

    return 0;
}
