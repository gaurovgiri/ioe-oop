#include <iostream>

using namespace std;

class Time
{
private:
    int hour, minute, second;

public:
    Time() { hour = minute = second = 0; };

    Time(int h, int m, int s)
        : hour(h), minute(m), second(s)
    {
        
    }

    void display()
    {
        cout << hour << " hr " << minute << " min " << second << " sec " << endl;
    }

    friend Time operator--(Time & ); 
};

Time operator--(Time &obj)
{

    return Time(--obj.hour, --obj.minute, --obj.second);
}

int main()
{

    Time t1(3, 4, 30), t2(1, 5, 1);

    Time t3 = --t1;

    t1.display();
    t3.display();

}