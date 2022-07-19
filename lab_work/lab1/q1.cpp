// WAP to calculate distance of two points (x1,y1) and (x2,y2)
// using user defined function

// Pass Value from main function and return result to main.

#include <iostream>
#include <cmath>

using namespace std;

double calcDistance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + (double)pow(y2 - y1, 2));
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

    distance = calcDistance(x1, y1, x2, y2);
    cout << "The distance is " << distance << endl;
    return 0;
}