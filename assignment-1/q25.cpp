// WAP to show conversion from user-defined to basic_data type

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

    operator float()
    {
        float temp;
        temp = ((feet * 12) + inches) * 2.54; // temp -> centimeter
        temp = temp / 100; // temp->meter;
        return temp;

    }
    void display()
    {
        cout << feet << " ft " << inches << " inches" << endl;
    }
};

int main()
{
    Distance d(4,0.818897);
    float meter;
    meter = d; // Basic = User-defined
    cout << meter << " m "<< endl;
}