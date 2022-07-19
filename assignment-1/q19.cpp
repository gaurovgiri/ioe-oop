/*
WAP to show order of object creation and destruction using static data members.There must
be static function in your program to display value of static data.
*/
#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
    static int count;
    char name[25];

public:
    Person()
    {
        strcpy(name, "DefaultName");
        cout << "Created: " << name << " | ";
        cDisplay();
    }

    Person(const char name[])
    {
        strcpy(this->name, name);
        cout << "Created: " << name << " | ";

        cDisplay();
    }

    static void cDisplay()
    {
        cout << "Id: " << ++count << endl;
    }

    static void dDisplay()
    {
        cout << "ID: " << count-- << endl;
    }

    ~Person()
    {
        cout << "Destroyed: " << name << " | ";
        dDisplay();
    }
};

int Person::count = 0;

int main()
{
    Person p1, p2("Bjarne"), p3("Linus"), p4("Dennis");


    return 0;
}