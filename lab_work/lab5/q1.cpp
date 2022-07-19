// WAP to store department id, name with default, parameterised constructor.
// Also write destructor in the same class & show the objects are destroyed in the reverse order of creation with suitable message

#include <iostream>
#include <cstring>

using namespace std;

class Store
{

private:
    char name[25];
    static int id;


public:
    

    Store()
    {
        id++;
        strcpy(name, "Default Name");
        cout << "Created ID: " << id << " Name: " << name << endl;
    }

    Store(int i, const char n[])
    {
        id++;
        strcpy(name, n);
        cout << "Created ID: " << id << " Name: " << name << endl;
    }
    ~Store()
    {
        cout << "Destroyed ID: " << id << " Name: " << name << endl;
        id--;
    }
};

int Store::id = 0;


int main()
{

    Store s1;                   // first object
    Store s2(1, "Big Mart");    // second object
    Store s3(2, "BhatBhateni"); // third object

    return 0;

    // when program ends destructor of s3 is called first then s2 then s1 (in reverse order)
}