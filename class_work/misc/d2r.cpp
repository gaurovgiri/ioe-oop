#include <iostream>

using namespace std;

class Rupees
{
private:
    int r;
    float p;

public:
    Rupees()
    {
        r = p = 0;
    }

    Rupees(int rr, float pp)
        : r(rr), p(pp){};

    void display()
    {
        cout << r << " " << p << endl;
    }
};

class Dollar
{
private:
    int d;
    float c;

public:
    Dollar()
    {
        d = c = 0;
    }

    Dollar(int dd, float cc)
        : d(dd), c(cc)
    {
    }

    void display()
    {
        cout << d << " " << c << endl;
    }

    operator Rupees()
    {
        int t = 125 * (d + c / 100);
        int r = static_cast<int>(t);
        float p = (t - r) * 100;
        return Rupees(r, p);
    }
};

int main()
{
    Dollar d1(5,10);
    Rupees r1;
    r1 = d1;
    r1.display();
}