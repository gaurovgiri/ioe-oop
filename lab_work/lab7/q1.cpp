// WAP to show execution of constructor and destructor in single inheritance. Show function overriding in it.

#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Base Constructed" << endl;
    }

    ~Base()
    {
        cout << "Base Destroyed" << endl;
    }

    void display()
    {
        cout << "Display from Base" << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived Constructor" << endl;
    }
    ~Derived()
    {
        cout << "Derived Destroyed" << endl;
    }
    void display()
    {
        cout << "Display from Derived" << endl;
    }
};

int main()
{
    Derived d;
    d.display(); // derived display
    d.Base::display(); // base display
    return 0;
}