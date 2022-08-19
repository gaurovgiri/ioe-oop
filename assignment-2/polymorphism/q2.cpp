/*
Design a class that represents paper.Create class book,newspaper,copy derived from class
paper.Add necessary member function to make your program meaningful and also show
constructor and virtual destructor.Create object Dynamically using pointer to the base class.
*/

#include <iostream>

using namespace std;

class Paper
{
protected:
    int pages;
    string material;

public:
    Paper()
    {
        cout << "Created Paper" << endl;
    }

    virtual void show()
    {
        cout << "Pages: " << pages << endl;
        cout << "Made of: " << material << endl;
    }

    virtual void getData()
    {
        cout << "Enter Pages: ";
        cin >> pages;
        cout << "Enter Paper Material: ";
        cin >> material;
    }
    virtual ~Paper()
    {
        cout << "Destroyed Paper" << endl;
    }
};

class Book : public Paper
{
private:
    string author;
    string title;

public:
    Book()
    {
        cout << "Created Book" << endl;
    }
    void show()
    {
        cout << "Book: " << title << endl;
        cout << "Author: " << author << endl;
        Paper::show();
    }

    void getData()
    {
        cout << "Enter Book Name: ";
        cin >> title;
        cout << "Enter Author Name: ";
        cin >> author;
        Paper::getData();
    }
    ~Book()
    {
        cout << "Destroyed Book \n";
    }
};

class NewsPaper : public Paper
{
private:
    string company;

public:
    NewsPaper()
    {
        cout << "Created NewsPaper" << endl;
    }
    void show()
    {
        cout << "Newspaper: " << company << endl;
        Paper::show();
    }

    void getData()
    {
        cout << "Enter Newspaper Name: ";
        cin >> company;
        Paper::getData();
    }
    ~NewsPaper()
    {
        cout << "Destroyed NewsPaper" << endl;
    }
};

class Copy : public Paper
{
private:
    string company;

public:
    Copy()
    {
        cout << "Created Copy" << endl;
    }
    void show()
    {
        cout << "Copy: " << company << endl;
        Paper::show();
    }

    void getData()
    {
        cout << "Enter Copy Name: ";
        cin >> company;
        Paper::getData();
    }
    ~Copy()
    {
        cout << "Destroyed Copy" << endl;
    }
};

int main()
{
    Paper *paper;

    paper = new Book;
    paper->getData();
    paper->show();
    delete paper;
    

    paper = new NewsPaper;
    paper->getData();
    paper->show();
    delete paper;


    paper = new Copy;
    paper->getData();
    paper->show();
    delete paper;


}