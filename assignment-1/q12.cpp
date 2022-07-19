#include <iostream>

using namespace std;


namespace Ram{
    char name[] = "Ram";
    int age = 19;
}

namespace Laxman{
    char name[] = "Laxman";
    int age = 18;
}

int main(){
    cout << "Hello, I'm " << Ram::name << " and my age is " << Ram::age << endl;
    cout << "Hello, I'm " << Laxman::name << " and my age is " << Laxman::age << endl;
}