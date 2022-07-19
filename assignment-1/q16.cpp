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
        feet = inch = 0;
    }

    Distance(int feet, float inch)
    {
        this->feet = feet;
        this->inch = inch;
        this->feet += inch / 12;
        this->inch = fmod(this->inch, 12);
    }

    void add(Distance d)
    {
        feet += d.feet;
        inch += d.inch;
        feet += inch / 12;
        inch = fmod(inch, 12);
        cout << "Feet: " << feet << " Inch: " << inch << endl;
    }

    Distance add(Distance d1, Distance d2)
    {
        int f;
        float i;

        f = d1.feet + d2.feet;
        i = d1.inch + d2.inch;

        f += i / 12;
        i = fmod(i, 12);

        return Distance(f, i); // nameless object
    }

    Distance add2(Distance d1, Distance d2)
    {
        Distance temp;

        temp.feet = d1.feet + d2.feet;
        temp.inch = d1.inch + d2.inch;

        temp.feet += temp.inch / 12;
        temp.inch = fmod(temp.inch, 12);

        return temp; // named object;
    }

    void display()
    {
        cout << "Feet: " << feet << " Inch: " << inch << endl;
    }

    friend Distance add(Distance, Distance);
};

Distance add(Distance d1, Distance d2)
{
    Distance temp;

    temp.feet = d1.feet + d2.feet;
    temp.inch = d1.inch + d2.inch;

    temp.feet += temp.inch / 12;
    temp.inch = fmod(temp.inch, 12);

    return temp;
}

int main()
{
    Distance d1(2, 9), d2(3, 3.5);
    d1.add(d2);                    // print
    Distance d3 = d3.add(d1, d2);  // nameless return
    Distance d4 = d4.add2(d3, d1); // named function
    d1.display();
    d3.display();
    d4.display();
    Distance d5 = add(d2,d4);
    d5.display();
}