#include <iostream>
#include <cmath>

#define PI 3.14159
using namespace std;

float area(float radius){
    return (float) PI * radius * radius;
}

float area(float length, float breadth){
    return (float) length * breadth;
}

float area(float a, float b, float c){
    float s = (a+b+c)/2;
    return (float)sqrt(s*(s-a) * (s-b) * (s-c));
}

int main(){
    float r,l,b,a,c;
    cout << "For Circle: "<< endl;
    cout << "Radius: "; cin >> r;
    cout << "Area of Circle: " << area(r) << endl;

    cout << "For Rectangle: " << endl;
    cout << "Length: "; cin>> l;
    cout << "Breadth: "; cin >> b;
    cout << "Area of Rectangle: " << area(l,b) << endl;

    cout << "For Triangle: " << endl;
    cout << "Enter side-A: "; cin >> a;
    cout << "Enter side-B: "; cin >> b;
    cout << "Enter side-C: "; cin >> c;
    cout << "Area of Triangle: " << area(a,b,c) << endl;

    return 0; 

}