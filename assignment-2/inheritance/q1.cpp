/*WAP with three classes students,test and result by using multilevel inheritance. Assume necessary data members and
function yourself and program with input information input data and calculate marks total and
display result.*/

#include <iostream>

using namespace std;

class Students
{
private:
    char name[25];
    int roll_no;

public:
    void get_data()
    {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Roll No.: ";
        cin >> roll_no;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No.:" << roll_no << endl;
    }
};

class Test : public Students
{
private:
    float marks;
    char sub_name[25];

public:
    void get_data()
    {
        cout << "Subject Name: ";
        cin >> sub_name;
        cout << "Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "Subject: " << sub_name << endl;
        cout << "Marks: " << marks << endl;
    }
    float r_marks()
    {
        return marks;
    }
};

class Result : public Test
{
private:
    Test subjects[7];
    float total=0;

public:
    void get_data()
    {
        Students::get_data();
        for (int i = 0; i < 7; i++)
        {
            subjects[i].get_data();
        }
    }

    void display()
    {
        Students::display();
        for (int i = 0; i < 7; i++)
        {
            subjects[i].display();
            total += subjects[i].r_marks();
        }
        cout << "Total Marks: " << total << endl;

    }
};

int main()
{
    Result a;
    a.get_data();
    cout << endl << endl;
    a.display();

}