/*

WAP to read name, roll number and marks that catches multiple exceptions using exception
class if roll number is negative and marks greater than full marks.

*/

#include <iostream>

#define FULLMARKS 100

using namespace std;

class Student
{
private:
    string name;
    int roll_no;
    float marks;

public:
    class NegativeRollError
    {
    };
    class MarksOverFlow
    {
    };
    void getData()
    {

        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> roll_no;
        if (roll_no < 0)
        {
            throw NegativeRollError();
        }
        cout << "Enter Marks: ";
        cin >> marks;
        if (marks > FULLMARKS)
        {
            throw MarksOverFlow();
        }
    }

    void showData()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll_no << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student stu;
    try
    {
        stu.getData();
        stu.showData();
    }
    catch (Student::NegativeRollError)
    {
        cout << "Roll No cannot be Negative." << endl;
    }
    catch (Student::MarksOverFlow)
    {
        cout << "Marks cannot be over " << FULLMARKS << endl;
    }
}