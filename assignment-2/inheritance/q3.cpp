// 3.WAP to show ambiguity in multiple inheritance and resolve it.

#include <iostream>
#include <string>

using namespace std;

class A
{
private:
    int id;
    string name;

public:
    void get_data()
    {
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
    }

    void show_data()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

class B
{
private:
    string subject;
    float marks;

public:
    void get_data()
    {
        cout << "Subject: ";
        cin >> subject;
        cout << "Marks: ";
        cin >> marks;
    }

    void show_data()
    {
        cout << "Subject: " << subject << endl;
        cout << "Marks: " << marks << endl;
    }
};

class C : protected A, B
{
private:
    string collegeName;
    long long phone_no;

public:
    void get()
    {
        A::get_data(); // get_data() is ambigious
        B::get_data();
        cout << "College Name: ";
        cin >> collegeName;
        cout << "Phone No: ";
        cin >> phone_no;
    }
    void display()
    {
        A::show_data(); // show_data() is ambigious 
        B::show_data();
        cout << "College Name: " << collegeName << endl;
        cout << "Phone No: " << phone_no << endl;
    }
};

int main()
{
    C obj;
    obj.get();
    obj.display();
    return 0;
}