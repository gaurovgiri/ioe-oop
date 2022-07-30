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
    cout << "Enter a double: "; cin >> a;
    cout << "Absolute Value: " << absoluteValue(a) << endl;
    
      int b;
    cout << "Enter a int: "; cin >> b;
    cout << "Absolute Value: " << absoluteValue(b) << endl; 
    
      float c;
    cout << "Enter a float: "; cin >> c;
   cout << "Absolute Value: " << absoluteValue(c) << endl;
   
   return 0;	
}
