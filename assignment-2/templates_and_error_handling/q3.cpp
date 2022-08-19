/*

WAP to compute
square root square root of a number. The input value must be tested for validity.If it is negative
an exception must be raised.

*/

#include <iostream>
#include <cmath>
using namespace std;

void squareRoot(float n)
{
    if (n < 0)
    {
        throw float();
    }
    else
    {
        cout << "The Square Root of " << n << " is " << sqrt(n) << endl;
    }
}

int main()
{
    float a;
    cout << "Enter a number: " ;
    cin >> a;
    try
    {
        squareRoot(a);
    }
    catch(float)
    {
        cout << "Negative Number cannot be sqaure rooted" << endl;
    }
}
