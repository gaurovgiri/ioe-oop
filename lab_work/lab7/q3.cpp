// WAP to show execution of constructor and destructor in multilevel inheritance.

#include <iostream>
#include <string.h>
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
private:
    int _id;

public:
    A()
    {
        cout << "Class A Constructed" << endl;
    }
    A(int id)
    {
        cout << "Parameterised Called From A" << endl;
        _id = id;
    }
    void display()
    {
        cout << _id << " ";
    }
    ~A()
    {
        cout << "Class A Destructed" << endl;
    }
};

class B : public A
{
private:
    char _name[25];

public:
    B()
    {
        cout << "Class B Constructed" << endl;
    }
    B(int id, char name[]) : A(id)
    {
        cout << "Parameterised Called from B" << endl;
        strcpy(_name,name);

    }
    void display()
    {
        A::display();
        cout << _name << " ";
    }
    ~B()
    {
        cout << "Class B Destructed" << endl;
    }
};

class C : public B
{
private:
    float _balance;

public:
    C()
    {
        cout << "Class C Constructed" << endl;
    }
    C(int id, char name[], float balance)
        : B(id, name)
    {
        cout << "Parameterised Called from C" << endl;
        _balance = balance;
    }

    void display()
    {
        B::display();
        cout << _balance << endl;
    }
    ~C()
    {
        cout << "Class C Destructed" << endl;
    }
};

int main()
{
    C obj(1, "hehehe", 12312.24);
    obj.display();
    return 0;
}