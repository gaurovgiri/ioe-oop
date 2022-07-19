// Enchancements in C++
//  Wap to calculate volume of cube, volume of cuboid, volume of cylinder using function overloading.

#include <iostream>

#define PI 3.14159

using namespace std;

double volume(double l)
{
    return l * l * l;
}

double volume(double l, double b, double h)
{
    return l * b * h;
}

double volume(double r, double h)
{
    return PI * r * r * h;
}

int main()
{
    static double l, b, h, r;
    cout << "Geometry: " << endl;
    cout << "1. Cube" << endl;
    cout << "2. Cuboid" << endl;
    cout << "3. Cylinder" << endl;

    cout << "Select your case: ";
    int cases;
    cin >> cases;

    switch (cases)
    {
        case 1:
            cout << endl <<"Cube: " << endl;
            cout << "Enter length: "; cin >> l;
            cout <<"The volume of Cube is " <<  volume(l) <<endl;
            break;
        case 2:
            cout << endl <<"Cuboid: " << endl;
            cout << "Enter length: "; cin >> l;
            cout << "Enter breadth: "; cin >> b;
            cout << "Enter height: "; cin>> h;
            cout << "The volume of Cuboid is " << volume(l,b,h) << endl;
            break;
        case 3:
            cout << endl << "Cylinder" << endl;
            cout << "Enter radius: "; cin >> r;
            cout << "Enter height: "; cin >> h;
            cout << "The volume of Cylinder is " << volume(r,h) << endl;
            break;

        default:
            break;
    }    
    return 0;
    
}