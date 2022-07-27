// WAP to create a student with data members name. id & roll no. Write data of students
// to file until user says "no". Read all information from file & display those information.

#include <bits/stdc++.h>

using namespace std;

class Student
{
private:
    char name[25];
    int id, roll_no;

public:
    void getData(char _name[], int _id, int _roll_no)
    {
        strcpy(name, _name);
        id = _id;
        roll_no = _roll_no;
    }

    void showData()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Roll No: " << roll_no << endl
             << endl;
    }
};

int main()
{
    Student stu, stu1;
    char option, name[25];
    int id, roll_no;
    ofstream out("Student.dat", ios::binary|ios::app);

    cout << "Writing Data: " << endl;
    while (option != 'n')
    {
        cout << "Name: ";
        cin >> name;
        cout << "ID: ";
        cin >> id;
        cout << "Roll No: ";
        cin >> roll_no;

        stu.getData(name, id, roll_no);

        out.write(reinterpret_cast<char *>(&stu), sizeof(stu));
        // out.seekp(sizeof(stu));

        cout << endl
             << "Do you want to Enter again? (y/n) ";
        cin >> option;
        cout << endl;
    }
    cout << endl;
    out.close();
    cout << "Reading From File: " << endl;
    ifstream inFile("Student.dat", ios::binary);

    while (true)
    {

        inFile.read(reinterpret_cast<char *>(&stu1), sizeof(stu1));
        if (inFile.eof())
        {
            break;
        }
        else if (!inFile.eof())
        {
        stu1.showData();
            
        }
    }
    return 0;
}