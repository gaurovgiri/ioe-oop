// WAP to overload unary preincrement ,postincrement,predecrement and postdecrement operators.

#include <iostream>
using namespace std;
class Complex
{
private:
    float real, imaginary;

public:
    Complex()
    {
        real = imaginary = 0;
    }
    Complex(float real, float imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    Complex(Complex &obj)
    {
        real = obj.real;
        imaginary = obj.imaginary;
    }
    void display()
    {
        cout << real << "+" << imaginary << "i" << endl;
    }

    Complex operator++()
    {
        return Complex(++real, ++imaginary);
    } // preincrement

    Complex operator++(int)
    {
        return Complex(real++, imaginary++);

    } // postincrement
    
    Complex operator--()
    {
        return Complex(--real, --imaginary);
        
    } // predecrement

    Complex operator--(int){
    return Complex(real--,imaginary--);

    } // postdecrement
};


int main()
{
    Complex a(1, 2), b(2, 3), d;
    Complex c = --b; // a.operator++();
    c.display();
    b.display();
}