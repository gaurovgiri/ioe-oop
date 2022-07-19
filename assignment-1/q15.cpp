#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
    char name[25];
    int age;
    long long phone_no;

public:
    Person()
    {
        cout << "Default Constructor Called." << endl;
        strcpy(name, "Default Name");
        age = 20;
        phone_no = 9812312322;
    }

    Person(const char name[], int age, long long phone_no)
    {
        cout << "Parameterised Constructor Called. " << endl;
        strcpy(this->name, name);
        this->age = age;
        this->phone_no = phone_no;
    }

    Person(Person &obj)
    {
        cout << "Copy Constructor Called. " << endl;
        strcpy(name, obj.name);
        age = obj.age;
        phone_no = phone_no;
    }

    void display()
    {
        cout << "Name: " << name << " Age: " << age << " Phone No.: " << phone_no << endl;
    }

    ~Person()
    {
        cout << "Destructor Called by " << name << endl;
    }
};

int main()
{
    Person p1, p2("Gaurav", 19, 9800123122);
    Person p3(p2);
    p1.display();
    p2.display();
    p3.display();
    return 0;
}