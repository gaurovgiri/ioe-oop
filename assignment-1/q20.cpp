// WAP to create a class student. Ask user to enter name and marks obtained in 5 different subjects.
//  The program should print the name and total marks obtained by the student.

#include <iostream>
#include <cstring>

using namespace std;

class Student
{
private:
    char name[25];
    double marks[5];

public:
    void get_data(char name[], double marks[])
    {
        strcpy(this->name, name);
        for (int i = 0; i < 5; i++)
        {
            this->marks[i] = marks[i];
        }
    }

    void total_marks()
    {
        double total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }
        cout << name << "'s total marks: " << total << endl;
    }
};

int main()
{
    double marks[5];
    char name[25];

    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter Marks in 5 different Subjects: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
    }
    Student s1;
    s1.get_data(name,marks);
    s1.total_marks();
}