#include <iostream>

using namespace std;



void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}


int main(){
    int a,b;
    cout << "Enter two numbers: "; cin >> a >> b;
    cout << "Before swapping: " << endl;
    cout << "a: " << a << " b: " << b << endl;
    swap(a,b);
    cout << "After swapping: " << endl;
    cout << "a: " << a << " b: " << b << endl;
    return 0;
}