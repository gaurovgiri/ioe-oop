// Create 2 functions with same name. Function Prototype looks like int calculation(int); Calculate y = x*x, z =x+x  inside function. Call function from main Use namespace to resolve conflict that may arise.

#include <iostream>

using namespace std;

namespace Multiplier
{

    int calculation(int x)
    {
        return x * x;
    }

}

namespace Adder
{

    int calculation(int x)
    {
        return x + x;
    }
}

int main()
{
    int n;
    cout << "Enter a number: "; cin >> n;
    cout << "From Multiplier: " << Multiplier::calculation(n) << endl;
    cout << "From Adder: " << Adder::calculation(n) << endl;
    return 0;
}