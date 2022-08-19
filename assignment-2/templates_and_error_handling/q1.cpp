/*

WAP to compare 2 values using
function template and display largest value.Check your program for char,int and float type
data.Also overload function that compares string type.

*/

#include <iostream>

using namespace std;

template <class T>
void largest(T a, T b)
{
    cout << (a > b ? a : b) << " is largest among " << a << " & " << b << endl;
}

void largest(string a, string b)
{
    if (a > b)
    {
        cout << a << " is the largest." << endl;
    }
    else
    {
        cout << b << " is the largest." << endl;
    }
}

int main()
{
    largest(1,2);
    largest(2.4,1.2);
    largest('a','z');
    string x = "Gaurav";
    string y = "Giri";
    largest(x,y);
}