// WAP to find average of n numbers using array. Use DMA to allocate memory for n numbers.

#include <iostream>

using namespace std;

int main()
{
    double total, *marks;
    int i, n;
    cout << "Enter the number of students: " << endl;
    cin >> n;
    marks = new double[n];
    cout << "Enter marks: ";
    for (i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
    for (i = 0; i < n; i++)
    {
        total += marks[i];
    }
    total /= n;

    cout << "Average: " << total << endl;

    delete []marks;

    return 0;
}