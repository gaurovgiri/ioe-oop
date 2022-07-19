// WAP tp create a class 'Area' & 'Volume' with function members get() & display().Create another class 'Box' which inherits features of both 'Area'
// 'Volume'. Show ambiguity in this inheritance & show how to resolve it.

#include <iostream>

using namespace std;

class Area
{
private:
    float length, breadth;

public:
    void get()
    {
        cout << "Area: " << endl;
        cout << "Length: ";
        cin >> length;
        cout << "Breadth: ";
        cin >> breadth;
    }

    void display()
    {
        cout << "Area-> " << (length * breadth) << endl;
    }
};

class Volume
{
private:
    float length, breadth, height;

public:
    void get()
    {
        cout << "Volume: " << endl;
        cout << "Length: ";
        cin >> length;
        cout << "Breadth: ";
        cin >> breadth;
        cout << "Height: ";
        cin >> height;
    }

    void display()
    {
        cout << "Volume-> " << (length * breadth * height) << endl;
    }
};

class Box : public Area, public Volume
{
};

int main()
{
    Box b;
    b.Area::get();
    b.Area::display();
    b.Volume::get();
    b.Volume::display();

}
