// Create a class 'dist' with fee , inch as data members. Add 2 objects of 'dist' class using member functoins & display result from main
// 1) By passing single argument(object) to Member function;
// 2) By passing 2 arguments to Member function

#include <iostream>
#include <cmath>

using namespace std;


class dist
{
private:
    int feet;
    float inch;

public:
    dist()
    {
        feet = inch = 0;
    }

    dist(int feet, float inch)
    {
        this->feet = feet;
        this->inch = inch;
        this->feet += this->inch / 12;
        this->inch = fmod(this->inch,12);
    }

    dist add(dist d)
    {
        int ft;
        float in;
        ft = feet + d.feet;
        in = inch + d.inch;
        ft += in / 12;
        in = fmod(in,12);
        return dist(ft, in);
    }
    void add(dist d1, dist d2)
    {
        feet = d1.feet + d2.feet;
        inch = d1.inch + d2.inch;
        feet += inch / 12;
        inch = fmod(inch,12);
    }

    void display()
    {
        cout << feet << " ft " << inch << " inch" << endl;
    }
};

int main()
{
    dist d1(12, 12), d2(13, 13), d3, d4;
    d4 = d1.add(d2);
    d3.add(d1, d2);
    d1.display();
    d3.display();
    d4.display();
    return 0;
}