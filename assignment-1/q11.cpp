#include <iostream>

using namespace std;


int main(){

    int n;
    float total = 0;
    cout << "How many numbers?" << endl << "n = "; cin >> n;
    float *numbers = new float[n];
    cout << "Enter Numbers: " << endl;
    for (int i = 0; i<n; i++){
        cin >> numbers[i];
    }
    for (int i = 0; i < n ; i++){
        total += numbers[i];
    }
    cout << "Average: " << total/(float)n << endl;
    return 0;
}