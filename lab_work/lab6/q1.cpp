// WAP to create TIME(hr,min,sec). OVerload ++(pre,post) & --(pre,post) to increment & decrement object values.

#include <iostream>


using namespace std;

class Time
{
private:
    int hour, minute, second;

public:
    Time()
    {
        hour = minute = second = 0;
    }
    Time(int hr, int min, int sec)
    {
        hour = hr;
        minute = min;
        second = sec;
        update();
    }

    Time operator++()
    {
        return Time(++hour, ++minute, ++second);
    }
    Time operator++(int)
    {
        return Time(hour++, minute++, second++);
    }
    Time operator--()
    {
        return Time(--hour, --minute, --second);
    }
    Time operator--(int)
    {
        return Time(hour--, minute--, second--);
    }

    friend ostream &operator<<(ostream &, const Time &);

    void update()
    {
        minute += second / 60;
        hour += minute / 60;
        minute %= 60;
        second %= 60;
    }
};

ostream &operator<<(ostream &os, const Time &t)
{
    os << t.hour << " hr " << t.minute << " min " << t.second << " sec ";
    return os;
}

int main()
{
    Time t1(2, 3, 4), t2(4, 6, 7),t3;
    cout << "Post Increment: " << t1++ << endl;
    t3 = t1;
    cout << "Result:" << t3 << endl << endl;

    cout << "Pre Increment: " << ++t1 << endl;
    cout << "Result: " << t1 << endl << endl;

    cout << "Post Decrement: " << t2-- << endl;
    cout << "Result: " << t2 << endl << endl;

    cout << "Pre Decrement: " << --t2 << endl;
    cout << "Result: " << t2 << endl << endl;
    return 0;
}