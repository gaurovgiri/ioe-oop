// WAP to show order of constructor(default, parameterized) and destructor calll in Multiple Inheritance

#include <iostream>
#include <string>
using namespace std;

class Base1
{
private:
    string name;

public:
    Base1()
    {
        cout << "Base1 Default Constructor Called!" << endl;
    }

    Base1(string _name)
    {
        name = _name;
        cout << "Base1 Parameterized Constructor Called!" << endl;
    }
    void display()
    {
        cout << "Base1:" << name << endl;
    }
    ~Base1()
    {
        cout << "Base1 Destructor Called!" << endl;
    }
};

class Base2
{
private:
    string name;

public:
    Base2()
    {
        cout << "Base2 Default Constructor Called!" << endl;
    }

    Base2(string _name)
    {
        name = _name;
        cout << "Base2 Parameterized Constructor Called!" << endl;
    }
    void display()
    {
        cout << "Base2:" << name << endl;
    }
    ~Base2()
    {
        cout << "Base2 Destructor Called!" << endl;
    }
};

class Derived : public Base1, Base2
{
private:
    string name;

public:
    Derived() : Base1(), Base2()
    {
        cout << "Derived Default Constructor Called!" << endl;
    }
    Derived(string _name) : Base1(_name), Base2(_name)
    {
        name = _name;
    }
    void display()
    {
        Base1::display();
        Base2::display();
        cout << "Derived:" << name << endl;
    }
    ~Derived()
    {
        cout << "Derived Destructor Called!" << endl;
    }
};

int main()
{
    Derived obj1,obj2("John Doe");
    obj1.display();
    obj2.display();
    return 0;
}