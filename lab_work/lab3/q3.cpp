// Create a single function name algebra. Calculate hcf & lcm inside function & display result from main. Solve using
// 1) reference variable concept
// 2) pointer variable concept.
#include <iostream>

using namespace std;

void algebra(int a, int b, int *hcf, int *lcm)
{

    int temp1 = a;
    int temp2 = b;
    while (a % b != 0)
    {
        if (a == 0)
        {
            *hcf = b;
            break;
        }
        else if (b == 0)
        {
            *hcf = a;
            break;
        }
        while (a != b)
        {
            if (a > b)
                a = a - b;
            else
                b = b - a;
        }
        *hcf = a;
        *lcm = (temp1 * temp2)/(*hcf);
    }
}

void algebra(int a, int b, int &hcf, int &lcm)
{

    int temp1 = a;
    int temp2 = b;
    while (a % b != 0)
    {
        if (a == 0)
        {
            hcf = b;
            break;
        }
        else if (b == 0)
        {
            hcf = a;
            break;
        }
        while (a != b)
        {
            if (a > b)
                a = a - b;
            else
                b = b - a;
        }
        hcf = a;
        lcm = ((temp1 * temp2)/hcf);
    }
}

int main()
{
    int hcf, lcm;

    algebra(8, 10, &hcf, &lcm);
    cout << hcf << " " << lcm << endl;
    algebra(2,3,hcf,lcm);
    cout << hcf << " " << lcm << endl;
    return 0;
}