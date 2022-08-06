// Write a program to write a class template which will have a single data member and other function members
//  to add, subtract, multiply and divide objects of that class template.
//  define your function outside of class and use your template class to create object using different data types

#include <iostream>

using namespace std;

template <class T>
class Calculator
{
private:
    T var;

public:
    Calculator(T n)
    {
        var = n;
    }
    Calculator()
    {

    }
    Calculator add(Calculator);
    Calculator subtract(Calculator);
    Calculator multiply(Calculator);
    Calculator divide(Calculator);

    friend ostream &operator<<(ostream &, const Calculator<T>);
};

template <class T>
ostream &operator<<(ostream &out, const Calculator<T> obj)
{
    out << obj.var;
    return out;
}

template <class T>
Calculator<T> Calculator<T>::add(Calculator obj)
{
    Calculator<T> result;
    result.var = var + obj.var;
    return result;
}

int main()
{
    Calculator<int> a = 3;
    Calculator<int> b = 4;
    cout << a.add(b);
}