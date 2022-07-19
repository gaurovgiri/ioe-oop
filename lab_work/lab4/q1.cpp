// WAP to create a class named 'Ward_Office' with location, phone & ward chairman name
// Read information of 'n' offices. Your program must have getdata(char,char,int)

#include <iostream>
#include <cstring>

using namespace std;

class Ward_Office
{
private:
    char location[25];
    long long phone;
    char chairman_name[25];

public:
    void get_data(const char location[], const char chairman_name[], long long phone)
    {
        strcpy(this->location, location);
        strcpy(this->chairman_name, chairman_name);
        this->phone = phone;
    }

    void display_data()
    {
        cout << "Location: " << location << "| Chairman: " << chairman_name << "| Phone: " << phone << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the number of offices to store: ";
    cin >> n;
    Ward_Office *wards = new Ward_Office[n];
    char location[25], chairman_name[25];
    long long phone;

    for (int i = 0; i < n; i++)
    {
        cout << "Ward no. " << i + 1 << endl;
        cout << "Location: "; cin >> location;
        cout << "Chairman: "; cin >> chairman_name;
        cout << "Phone: "; cin >> phone;
        cout << endl;
        wards[i].get_data(location, chairman_name, phone);
    }

    for (int i = 0; i < n; i++)
    {
        wards[i].display_data();
    }

    delete [] wards;

    return 0;
}