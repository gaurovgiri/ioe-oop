/*
Explain different manipulators available in C++.WAP to
overload >> and << operator.
*/

#include <iostream>

using namespace std;

class Complex
{
private:
    float real;
    float imag;

public:
    Complex()
    {
        real = imag = 0;
    }
    friend istream &operator>>(istream &, Complex&);
    friend ostream &operator<<(ostream &, Complex&);

    void add(Complex obj)
    {
        real += obj.real;
        imag += obj.imag;
    }
};

istream &operator>>(istream &inp, Complex &obj)
{
    inp >> obj.real >> obj.imag;
    return inp;
}

ostream &operator<<(ostream &out, Complex &obj)
{
    out << obj.real << "+" << obj.imag << "i";
    return out;
}

int main()
{
    Complex c1, c2;
    cin >> c1 >> c2;
    c1.add(c2);
    cout << c1 << endl
         << c2 << endl;
}