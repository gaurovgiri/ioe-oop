// WAP to create two classes ABC with data member meter, cm and XYZ with data member inch and feet. Using friend function access private
// data of ABC and XYZ and dsiplay of all datas. Display result either in m, cm format or in inch, feet format.

#include <iostream>
#include <cmath>

using namespace std;

class XYZ;

class ABC
{
private:
    int meter;
    float centimeter;

public:
    ABC()
    {
        meter = 0;
        centimeter = 0;
    }
    ABC(int m, float cm)
    {
        meter = m;
        centimeter = cm;
    }

    ABC(ABC &obj)
    {
        meter = obj.meter;
        centimeter = obj.centimeter;
    }

    XYZ convert();

    friend void display(ABC&, XYZ&);

};

class XYZ
{
private:
    int feet;
    float inches;

public:
    XYZ()
    {
        feet = 0;
        inches = 0;
    }
    XYZ(int f, float in)
    {
        feet = f;
        inches = in;
    }
    XYZ(XYZ &obj)
    {
        feet = obj.feet;
        inches = obj.inches;
    }

    ABC convert();

    friend void display(ABC&, XYZ&);
};

XYZ ABC::convert()
{
    int feet;
    float inches;
    inches = ((meter * 100) + centimeter) * 0.393701;
    feet = inches / 12;
    inches = fmod(inches, 12);
    return XYZ(feet, inches);
}

ABC XYZ::convert()
{
    int meter;
    float centimeter;
    centimeter = ((feet * 12) + inches) * 2.54;
    meter = centimeter / 100;
    centimeter = fmod(centimeter, 100);
    return ABC(meter, centimeter);
}

void display(ABC &d1, XYZ &d2)
{
    XYZ d11 = d1.convert();
    ABC d22 = d2.convert();
    cout << d1.meter << " m " << d1.centimeter << " cm " << endl;
    cout << d11.feet << " ft " << d11.inches << " inches " << endl
         << endl;

    cout << d2.feet << " ft " << d2.inches << " inches " << endl;
    cout << d22.meter << " m " << d22.centimeter << " cm " << endl;
}

int main()
{
    ABC meterWala(10, 0);
    XYZ feetWala(11, 2);

    display(meterWala, feetWala);
    return 0;
}