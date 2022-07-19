// pass value from main and display result inside function

#include <iostream>
#include <cmath>

using namespace std;

void calcDistance(double x1,double y1, double x2, double y2)
{
    cout << "The distance is " << sqrt(pow(x2 - x1, 2) + (double)pow(y2 - y1, 2)) <<endl;
}

int main()
{
    double x1, x2, y1, y2, distance;
    cout << "X1: ";
    cin >> x1;
    cout << "Y1: ";
    cin >> y1;
    cout << "X2: ";
    cin >> x2;
    cout << "Y2: ";
    cin >> y2;

    calcDistance(x1,y1,x2,y2);
    return 0;
}