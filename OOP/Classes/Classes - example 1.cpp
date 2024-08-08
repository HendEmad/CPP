#include<bits/stdc++.h>
using namespace std;

class car
{
// Private scope
private:
    // Member data/values
    char name[15];
    char color[10];
    int maxSpeed;
    int model;

// Public scope
public:
    // Member functions --> Functions defined in the class in the public scope
    // SET FUNCTIONS
    // Function to set a name for the cat
    void setName(char n[])
    {
        strcpy_s(name, n);
    }
    // function to set a color
    void setColor(char c[])
    {
        strcpy_s(color, c);
    }
    // function to set a maxSpeed
    void setMaxspeed(int m)
    {
        maxSpeed = m;
    }
    //function to set the model
    void setModel(int m)
    {
        model = m;
    }

    // GET FUNCTIONS
    char* getName()
    {
        return name;
    }
    char* getColor()
    {
        return color;
    }
    int getMaxspeed()
    {
        return maxSpeed;
    }
    int getModel()
    {
        return model;
    }

    // Function to print the attributes values
    void print()
    {
        /*
        cout << "Car name: " << name << "\n" <<
                "Car color: " << color << "\n" <<
                "Car max speed = " << maxSpeed << "\n"
                "Car model: " << model << "\n";
        */  //OR
        cout << "Car name: " << getName() << "\n" <<
                "Car color: " << getColor() << "\n" <<
                "Car max speed = " << getMaxspeed() << "\n"
                "Car model: " << getModel() << "\n";
    }

};

// Non-member function
void p()
{
    cout << "Non member function" << endl;
}

int main()
{
    p();
    car x;
    x.setName("BMW");
    x.setColor("Blue");
    x.setMaxspeed(250);
    x.setModel(2023);
    x.print();
}
