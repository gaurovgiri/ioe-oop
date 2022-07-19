// WAP to add and substract 2 distances d1(feet,inch) and d2(feet,inch) using operator overloading + and -. Using member function.

#include <iostream>
#include <cmath>

using namespace std;

class Distance
{

private:
    int feet;
    float inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }

    Distance(int f, float i)
    {
        feet = f;
        inch = i;
        update();
    }

    Distance(Distance &obj)
    {
        feet = obj.feet;
        inch = obj.inch;
        update();
    }

    Distance operator+(Distance obj)
    {
        Distance temp;
        temp.feet = feet + obj.feet;
        temp.inch = inch + obj.inch;
        temp.update();
        return temp;
    }

    Distance operator-(Distance obj)
    {
        Distance temp;
        temp.feet = feet - obj.feet;
        temp.inch = inch - obj.inch;
        temp.update();
        return temp;
    }

    void update()
    {
        feet += inch / 12;
        inch = fmod(inch, 12);
    }

    void display()
    {
        cout << feet << " ft " << inch << " inch " << endl;
    }
};

int main()
{
    Distance d1(11, 10), d2(9, 3), d3;
    d3 = d1 + d2;
    d3.display();
}