// Create 2 classes DM & DB. DM stores distances in meter & centimeters & DB in feet & inches.
// Using friend function add one object of DM with object of DB.
// The object that stores result may be DB or DM depending upon units in which the result are required &
// display find result either in feet & inches or meter & centimeter depending on the object;.

#include <iostream>
#include <cmath>

using namespace std;

class DM;

class DB
{
private:
    int feet;
    float inches;

public:
    DB()
    {
        feet = inches = 0;
    }

    DB(int ft, float inch)
    {
        feet = ft;
        inches = inch;
        feet += inches / 12;
        inches = fmod(inches, 12);
    }

    void display()
    {
        cout << "Feet: " << feet << " Inches: " << inches << endl;
    }

    friend void add(DB &, DM &);
};

class DM
{

private:
    int meter;
    float centimeters;

public:
    DM()
    {

        meter = centimeters = 0;
    }

    DM(int m, float cm)
    {
        meter = m;
        centimeters = cm;
        meter += centimeters / 100;
        centimeters = fmod(centimeters, 100);
    }

    void display()
    {
        cout << "Meters: " << meter << " Centimeters: " << centimeters << endl;
    }

    friend void add(DB &, DM &);
};

void add(DB &obj1, DM &obj2)
{
    float inches = (obj1.feet * 12) + obj1.inches;
    float centimeter = (obj2.meter * 100) + obj2.centimeters;

    float total_in_cm = (inches * 2.54) + centimeter;
    float total_in_inches = (centimeter / 2.54) + inches;

    obj1.feet = total_in_inches / 12;
    obj1.inches = fmod(total_in_inches, 12);

    obj2.meter = total_in_cm / 100;
    obj2.centimeters = fmod(total_in_cm, 100);
}

int main()
{

    DB f(1, 0);
    DM m(1, 0);
    add(f, m);

    f.display();
    m.display();
    return 0;
}
