// WAP to find absolute value of any given number using function template.

#include <bits/stdc++.h>

using namespace std;

template <typename T>
T absoluteValue(T arg)
{
    return arg < 0 ? arg * -1 : arg;
}

int main()
{
    double a;
    cout << "Enter a number: "; cin >> a;
    cout << "Absolute Value: " << absoluteValue(a) << endl; 
}
