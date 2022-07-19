// Solve question 22 using friend function.

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

    void update()
    {
        feet += inch / 12;
        inch = fmod(inch, 12);
    }

    void display()
    {
        cout << feet << " ft " << inch << " inch " << endl;
    }

    friend Distance operator+(Distance, Distance);
    friend Distance operator-(Distance, Distance);
};

Distance operator+(Distance obj1, Distance obj2)
{
    Distance temp;
    temp.feet = obj1.feet + obj2.feet;
    temp.inch = obj1.inch + obj2.inch;
    temp.update();
    return temp;
}

Distance operator-(Distance obj1, Distance obj2)
{
    Distance temp;
    temp.feet = obj1.feet - obj2.feet;
    temp.inch = obj1.inch - obj2.inch;
    temp.update();
    return temp;
}

int main()
{
    Distance d1(11, 10), d2(9, 3), d3;
    d3 = d1 + d2;
    d3.display();
}