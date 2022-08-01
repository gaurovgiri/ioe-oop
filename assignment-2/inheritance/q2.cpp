/*Create a class called cricketer with member variables to represent name,age and number of
matches played.From this class derive two classes Bowler and Batsman.Bowler class has number
of wickets as member variable and Batsman class has number of runs and centuries as member
variables.Use appropriate member functions in all classes to read and display respective data.*/

#include <iostream>

using namespace std;

class Cricketer
{
private:
    char name[25];
    int age;
    int number_of_matches;

public:
    void get_data()
    {
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Number of Matches Played: ";
        cin >> number_of_matches;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Number of Matches: " << number_of_matches << endl;
    }
};

class Bowler : public Cricketer
{
private:
    int no_of_wickets;

public:
    void get_data()
    {
        Cricketer::get_data();
        cout << "No of Wickets: ";
        cin >> no_of_wickets;
    }

    void display()
    {
        Cricketer::display();
        cout << "No of Wickets: " << no_of_wickets << endl << endl;
    }
};

class Batsman : public Cricketer
{
private:
    int runs, centuries;

public:
    void get_data()
    {
        Cricketer::get_data();
        cout << "Runs: ";
        cin >> runs;
        cout << "Centuries: ";
        cin >> centuries;
    }
    void display()
    {
        Cricketer::display();
        cout << "Runs: " << runs << endl;
        cout << "Centuries: "<< centuries << endl << endl;
    }
};

int main()
{
    Batsman batsman;
    Bowler bowler;

    batsman.get_data();
    bowler.get_data();

    cout << "--------Displaying Data-----------";
    batsman.display();
    bowler.display();
}