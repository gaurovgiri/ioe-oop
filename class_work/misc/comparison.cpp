// Write a program to create a class named distance with meter and centimeter as data members. Compare two distances using operator overloading (>,<,==)

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

    bool operator>(Distance obj)
    {
        if (meter >= obj.meter)
        {
            if (centimeter > obj.centimeter)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        return false;
    }

    bool operator<(Distance obj)
    {
        float meter1 = meter+centimeter/100;
        float meter2 = obj.meter+obj.centimeter/100;
        if(meter1 < meter2){
        	return true;
        }
        return false;
    }

    friend bool operator==(Distance, Distance);
};

bool operator==(Distance d1, Distance d2)
{
    if (d1.meter == d2.meter && d1.centimeter == d2.centimeter)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Distance d1(3, 2.5), d2(4, 5.6), d3(4, 5.6);

    if (d1 > d2)
    {
        cout << "This won't print since, d1 is smaller than d2" << endl;
    }
    if (d1 < d2)
    {
        cout << "This gets printed since, d1 is smaller than d2" << endl;
    }
    if (d2 == d3)
    {
        cout << "This gets printed because d2 is equals to d3" << endl;
    }

}
