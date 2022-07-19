// WAP to calculate simple interest using inline function;

#include <iostream>

using namespace std;

inline double simpleInterest(double P, double T, double R)
{
    return (P * T * R) / 100;
}

int main()
{
    double principle, time, rate;
    cout << "Principle: ";
    cin >> principle;
    cout << "Time: ";
    cin >> time;
    cout << "Rate: ";
    cin >> rate;

    cout << "Simple Interest is: " << simpleInterest(principle, time, rate);
}