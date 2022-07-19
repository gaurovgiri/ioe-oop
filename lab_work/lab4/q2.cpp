// WAP to create a class named "Hospital" with name, staff_no as data members. 
// Use default, parameterised and copy constructors to initialize objects & display
// those records using member function showdata()

#include <iostream>
#include <cstring>

using namespace std;

class hospital
{
private:
    char name[25];
    int staff_no;

public:
    hospital()
    {
        cout << "Default Constructor Called." << endl;
        strcpy(name, "NULL");
        staff_no = 0;
    }

    hospital(const char name[], int staff_no)
    {
        cout << "Parameterised Constructor Called." << endl;
        strcpy(this->name, name);
        this->staff_no = staff_no;
    }

    hospital(hospital &obj)
    {
        cout << "Copy Constructor Called." << endl;
        strcpy(name, obj.name);
        staff_no = obj.staff_no;
    }

    void showData()
    {
        cout << "Name: " << name << " | Staff_No: " << staff_no << endl;
    }
};

int main()
{
    hospital h1, h2("Sumeru",32);
    hospital h3 = h2;
    h1.showData(); // default
    h2.showData(); // parameterised
    h3.showData(); // copy
    return 0;
}