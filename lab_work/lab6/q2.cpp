// WAP to compare values (<,>,==) of 2 objects of class Distance with data members m & cm;

#include <iostream>

using namespace std;

class Distance
{
private:
    int meter;
    float centimeter;

public:
    Distance()
    {
        meter = 0;
        centimeter = 0;
    }

    Distance(int m, float cm)
    {
        meter = m;
        centimeter = cm;
    }

    bool operator<(Distance d)
    {
        float d1 = meter + (centimeter / 100);
        float d2 = d.meter + (d.centimeter / 100);
        if (d1 < d2)
        {
            return true;
        }
        return false;
        
    }

    bool operator>(Distance d)
    {
        float d1 = meter + (centimeter / 100);
        float d2 = d.meter + (d.centimeter / 100);
        if (d1 > d2)
        {
            return true;
        }
        return false;
    }

    bool operator==(Distance d)
    {
        if (meter == d.meter && centimeter == d.centimeter)
            return true;
        return false;
    }

    friend ostream &operator<<(ostream &, const Distance &);
};

ostream &operator<<(ostream &out, const Distance &d)
{
    out << d.meter << "m " << d.centimeter << "cm ";
    return out;
}

int main()
{
    Distance d1(1, 2), d2(3, 4), d3(1, 2);

    if (d2 < d1)
    {
        cout << "This will not get printed since, d2: " << d2 << " is  not lesser than d1: "<< d1 << endl;
    }
    if (d2 > d1)
    {
        cout << "This will get printed since, d2: " << d2 << " is greater than d1: " << d1 << endl;
    }
    if (d3 == d1)
    {
        cout << "This will get printed since, d3: " << d3 << " is equals to d1: " << d1 << endl;
        
    }
}