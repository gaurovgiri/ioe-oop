/*

Write a class template that contain array as data member.
Find maximum and minimum
value of an array and display it. Check your program for float values as well as int values. Class
template must have template and non template type arguments. Also include default argument
with class template.

*/

#include <iostream>
using namespace std;


template <class T, int n = 5>
class Array
{
private:
    T arr[n];

public:
    void getData()
    {
        cout << "Enter Data: " << endl;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }

    T getMax()
    {
        T max = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (max > arr[i])
            {
                max = arr[i];
            }
        }
        return max;
    }

    T getMin()
    {
        T min = arr[0];
        for (int i = 1; i < n; i++)
        {
            if (min < arr[i])
            {
                min = arr[i];
            }
        }
        return min;
    }
};

int main()
{
    Array<int> a;
    a.getData();

    cout << "Max is: " << a.getMax() << endl;
    cout << "Min is: " << a.getMin() << endl;

    Array<float, 6> b;
    b.getData();

    cout << "Max is: " << b.getMax() << endl;
    cout << "Min is: " << b.getMin() << endl;

}
