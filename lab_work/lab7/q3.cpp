// WAP to show execution of constructor and destructor in multilevel inheritance.

#include <iostream>
using namespace std;

/*
    A
    ↑
    B
    ↑
    C

*/

class A
{
public:
    A()
    {
        cout << "Class A Constructed" << endl;
    }
    ~A()
    {
        cout << "Class A Destructed" << endl;
    }
};

class B: public A
{
public:
    B()
    {
        cout << "Class B Constructed" << endl;
    }
    ~B()
    {
        cout << "Class B Destructed" << endl;
    }
};

class C: public B
{
public:
    C()
    {
        cout << "Class C Constructed" << endl;
    }
    ~C()
    {
        cout << "Class C Destructed" << endl;
    }
};

int main()
{
    C obj;
    return 0;
}