/*A bookshop in Kathmandu valley sells books and
DVD.Two classes Book and DVD are inherited from the abstract base class Media.The Media
class has common data members such as title and publication.The class Book has data members
such as number_of_pages and that of DVD has data member such as duration.Each class
members has member functions such as readdata() and showdata().Wap for modeling the class
hierarchy for book shop and process objects of these classes using pointers to the base class.*/

#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

class Media
{
protected:
    char title[50];
    char publication[50];

public:
    virtual void readdata() = 0;
    virtual void showdata()
    {
        cout << "Title: " << title << endl;
        cout << "Publication: " << publication << endl;
    }
};

class Books : public Media
{
private:
    int pages;

public:
    void readdata()
    {
        cout << "Enter Book Title Name: ";
        cin >> title;
        cout << "Enter Book Publication Name: ";
        cin >> publication;
        cout << "Etner No of Pages: ";
        cin >> pages;
    }
    void showdata()
    {
        Media::showdata();
        cout << "No of Pages: " << pages << endl;
    }
};

class DVD : public Media
{
private:
    float duration;

public:
    void readdata()
    {
        cout << "Enter DVD Title Name: ";
        cin >> title;
        cout << "Enter DVD Publication Name: ";
        cin >> publication;
        cout << "Enter the duration of DVD Player: ";
        cin >> duration;
    }
    void showdata()
    {
        Media::showdata();
        cout << "Duration: " << duration << endl;
    }
};

int main()
{
    Media *m;
    Books b;
    m = &b;
    m->readdata();
    m->showdata();
    DVD d;
    m = &d;
    m->readdata();
    m->showdata();
    return 0;
}