// Create a class student with data members studentID and name. Create class internal_exam with
// internal_marks as datqa member and extyernal_exam that has external_marks as data members that will
// inherit student class. Create class result by inheriting class internal_exam
// and external_exam that will add marks of class internal_exam and external_exam. Use virtual base class when
// required.

#include <iostream>
#include <string>

using namespace std;

class Student
{
protected:
    int studentID;
    string name;
    string subjects[3] = {"OOP", "TOC", "MATHS"};

public:
    void getData()
    {
        cout << "Enter: " << endl;
        cout << "Student ID: ";
        cin >> studentID;
        cout << "Name: ";
        cin >> name;
    }

    void showData()
    {
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;
    }
};

class Internal_Exam : virtual public Student
{
protected:
    float imarks[3];
    float itotal;

public:
    void getData()
    {
        cout << "Enter Internal Marks for Subject: " << endl;
        itotal = 0;
        for (int i = 0; i < 3; i++)
        {
            cout << subjects[i] << ": ";
            cin >> imarks[i];
            itotal += imarks[i];
        }
    }
    void showData()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << subjects[i] << ": " << imarks[i] << endl;
        }
        cout << "Total: " << itotal << endl;

    }
};

class External_Exam : virtual public Student
{
protected:
    int emarks[3];
    float etotal;

public:
    void getData()
    {
        cout << "Enter External Marks for Subject: " << endl;
        etotal = 0;
        for (int i = 0; i < 3; i++)
        {
            cout << subjects[i] << ": ";
            cin >> emarks[i];
            etotal += emarks[i];
        }
    }
    void showData()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << subjects[i] << ": " << emarks[i] << endl;
        }
            cout << "Total: " << etotal << endl;

    }
};

class Result : public Internal_Exam, public External_Exam
{
private:
    int total;

public:
    void getData()
    {
        Student::getData();
        Internal_Exam::getData();
        External_Exam::getData();
        total = itotal + etotal;
    }

    void showData()
    {
        cout << "---------------------" << endl
        Student::showData();
        Internal_Exam::showData();
        External_Exam::showData();
        cout << "Grand Total: " << total << endl;
    }
};

int main()
{
    Result objR;
    objR.getData();
    objR.showData();
    return 0;
}