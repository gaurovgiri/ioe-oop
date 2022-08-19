
/* Write a meaningful program that can handle multiple exceptions. */



#include <iostream>
#include <cstring>

using namespace std;

class Numbers
{


public:
    class ZeroDivisionError
    {

    };
    class NegativeNumberError
    {
    };

    int divide(int a, int b)
    {
        if (b == 0)
            throw ZeroDivisionError();
        else if (a < 0 || b < 0)
            throw NegativeNumberError();
        else
            return a / b;
    }
};

int main()
{
    Numbers obj;
    try
    {
        cout << obj.divide(2, 3) << endl;
        cout << obj.divide(2, 0) << endl;
        cout << obj.divide(2, -3) << endl;

    }
    catch (Numbers::ZeroDivisionError)
    {
       cout << "Number cannot be divided by Zero" << endl;
    }
    catch (Numbers::NegativeNumberError)
    {
       cout << "Number cannot be divided by Negative Number" << endl;
    }
}