// WAP to explain conversion from one user defined data type(class Type one) to other user defined data type(class type two)

// This can be done in two ways -> Using casting operator (defined in source class) or Constructor (defined in destination class)

#include <iostream>
#include <cmath>

using namespace std;

class Fahrenheit;

class Celcius
{
private:
    float degree;

public:
    Celcius()
    {
        degree = 0;
    }
    Celcius(float deg)
    {
        degree = deg;
    }

    float get_degree()
    {
        return degree;
    }

    void display()
    {
        cout << degree << " C" << endl;

    }
};

class Fahrenheit
{
private:
    float degree;

public:
    Fahrenheit()
    {
        degree = 0;
    }
    Fahrenheit(float deg)
    {
        degree = deg;
    }

    Fahrenheit(Celcius obj) // Fahrenheit = Celcius
    {
        degree = (obj.get_degree() * 9 / 5) + 32;
    }

    operator Celcius() // Celcius = Fahrenheit
    {
        float cel = (degree - 32) * 5 / 9;
        return Celcius(cel);
        
    }

    float get_degree()
    {
        return degree;
    }
    void display()
    {
        cout << degree << " F" << endl;
    }
};

int main()
{
    Fahrenheit f1,f2(40);
    Celcius c1,c2(100);
    
    f1 = c2; // 100 degree celcius to fahrenheit
    c1 = f2; // 40 degree fahrenheit to celcius

    f1.display();
    c1.display();
}
