#include <iostream>

using namespace std;

void average(float a, float b){
    float avg = (a+b)/2;
    cout << avg << endl;
}


int main(){
    float x, y;
    cout << "Enter two numbers: "; cin >> x >> y;
    average(x,y);
    return 0;
}