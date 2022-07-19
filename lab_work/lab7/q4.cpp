// WAP to show ambiguity in multipath inheritance & show how we cab resolve it.

#include <iostream>

using namespace std;

/*
        A
      ↗   ↖
    B       D
     ↖     ↗
        C


*/

class A
{
protected:
    int id;

public:
    void display()
    {
        cout << "ID: " << endl;
    }
};

class B : virtual public A
{
protected:
    char name[25];

public:
    void display()
    {
        cout << "ID: " << id << " Name: " << name << endl;
    }
};

class C : virtual public A
{
protected:
    int roll_no;

public:
    void display()
    {
        cout << "ID: " << id << " Roll No: " << roll_no << endl;
    }
};

class D : public B, public C
{
protected:
    int age;

public:
    void display()
    {
        cout << "ID: " << id << " Name: " << name << " Roll No: " << roll_no << " Age: " << age << endl;
    }

    void get()
    {
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "Roll No: ";
        cin >> roll_no;
        cout << "Age: ";
        cin >> age;
    }
};

int main()
{
    D obj;
    obj.get();
    obj.display();

}