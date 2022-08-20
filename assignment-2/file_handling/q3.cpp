/*
Design a book class with members ISBN number,name
of author,title,price.The program should able to store book object to a file,Find a book in the
database and display according to ISBN number.Also display all records.Also check for possible
condition if file doesnt exist or cannot open.
*/

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

class Book
{
private:
    long long ISBN;
    char author[25];
    char title[25];
    float price;
    char FilePath[25];

public:
    Book()
    {
    }

    Book(const char file_path[])
    {
        fstream File;

        strcpy(FilePath, file_path);
        File.open(file_path, ios::in | ios::binary);
        if (!File)
        {
            File.open(file_path, ios::out);
        }
        File.close();
    }
    void getData()
    {
        cout << "Enter ISBN: ";
        cin >> ISBN;
        cout << "Enter Author: ";
        cin >> author;
        cout << "Enter Title: ";
        cin >> title;
        cout << "Price: ";
        cin >> price;
    }

    void showData()
    {
        cout << "ISBN: " << ISBN << endl;
        cout << "Author: " << author << endl;
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
        cout << endl;
    }
    void save(string file_path)
    {
        ofstream File;

        File.open(file_path, ios::app | ios::binary);
        File.write(reinterpret_cast<char *>(this), sizeof(*this));
        File.close();
    }
    void save()
    {
        ofstream File;

        File.open(FilePath, ios::app | ios::binary);
        File.write(reinterpret_cast<char *>(this), sizeof(*this));
        File.close();
    }
    void show(long long _ISBN)
    {
        ifstream File;

        File.open(FilePath, ios::binary);
        while (File.read(reinterpret_cast<char *>(this), sizeof(*this)))
        {
            if (this->ISBN == _ISBN)
            {
                this->showData();
                break;
            }
        }
        File.close();
    }

    void show()
    {
        ifstream File;
        File.open(FilePath, ios::binary);

        while (File.read(reinterpret_cast<char *>(this), sizeof(*this)))
        {
            this->showData();
        }
        File.close();
    }
};

int main()
{
    static Book book("Book.dat");
    system("clear");
    cout << "1. Enter New Record." << endl;
    cout << "2. Search By ISBN." << endl;
    cout << "3. Show All." << endl;
    cout << "4. Exit." << endl;

    int n;
    int c;
    cout << "Enter your Choice: ";
    cin >> n;
    switch (n)
    {
    case 1:
        book.getData();
        book.save();
        main();
        break;
    case 2:
        long long ISBN;
        cout << "Enter ISBN: ";
        cin >> ISBN;
        cout << "-------------------------------" << endl;
        book.show(ISBN);
        cout << "-------------------------------" << endl;

        cout << "Type 'y' and hit enter to go back";
        getchar();
        getchar();
        main();
        break;
    case 3:
        cout << "-------------------------------" << endl;
        book.show();
        cout << "-------------------------------" << endl;
        getc(stdin);
        getc(stdin);
        main();
        break;
    case 4:
        exit(0);
    default:
        main();
        break;
    }
}