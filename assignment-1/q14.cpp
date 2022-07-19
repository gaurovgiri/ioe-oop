#include <iostream>
#include <cstring>


using namespace std;

class animal
{
private:
    char name[25];
    int id_number;
    float cost;

public:
    void setdata(const char n[], int id, float price)
    {
        strcpy(name, n);
        id_number = id;
        cost = price;
    }

    void showdata()
    {
        
        cout << "ID: " << id_number << " Name: " << name << " Cost: "   << cost << endl;
    }
};

int main()
{
    animal a1, a2;
    a1.setdata("Person1",1,20000.123);
    a2.setdata("Person2",2,19000.123);
    a1.showdata();
    a2.showdata();
    return 0;
}