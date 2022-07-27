// File Handling & Template

// WAP to find maximum & minimum value in an array using class template.

#include <bits/stdc++.h>

using namespace std;

template <typename T>
class Foo
{
private:
    T *arr;
    int num;

public:
    Foo(T inpArr[],int n)
    {
        arr = inpArr;
        num = n;
    }

    T getMax()
    {
        T max = arr[0];
        for (int i = 0; i < num; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
    }

    T getMin()
    {
        T min = arr[0];
        for (int i = 0; i < num;i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
        return min;
    }
};

int main()
{

    int n;
    cout << "Enter the number of data: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Foo<int> obj(arr,n);

    cout << "Maximum: " << obj.getMax() << endl;
    cout << "Minimum: " << obj.getMin() << endl;

    return 0;
    
}