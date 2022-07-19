// WAP to show conversion from basic data type(in-built data) to user defined data type (Class type);

#include <iostream>
#include <cmath>

using namespace std;

class Distance
{

private:
    int feet;
    float inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, float i)
    {
        feet = f;
        inches = i;
    }
    Distance(float m) 
    {
        m = m * 100; // to convert meter to centimeter;
        inches = m / 2.54;
        feet = inches / 12;
        inches = fmod(inches, 12);
    }
    void display()
    {
        cout << feet << " ft " << inches << " inches" << endl;
    }
};

int main()
{
    Distance d;
    float meter =1.24;
    d = meter; // User-defined = In-Built
    d.display();

}