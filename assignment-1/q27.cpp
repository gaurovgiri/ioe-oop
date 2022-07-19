// WAP to overload >,<,== operator to compare two Amount(rs,paisa) using the concept of operator overloading.

#include <iostream>

using namespace std;

class Amount
{
private:
    int rs, paisa;

public:
    Amount()
    {
        rs = paisa = 0;
    }

    Amount(int r, int p)
    {
        rs = r;
        paisa = p;
    }

    bool operator>(Amount obj)
    {
        if (rs == obj.rs)
        {
            if (paisa > obj.paisa)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else if (rs > obj.rs)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator<(Amount obj)
    {
        if (rs == obj.rs)
        {
            if (paisa < obj.paisa)
            {
                return true;
            }
            return false;
        }
        else if (rs < obj.rs)
        {
            return true;
        }
        else
            return false;
    }

    /*  bool operator==(Amount obj)
      {
          if ((*this) < obj || (*this) > obj)
          {
              return false;
          }
          return true;
      }
  */
    bool operator==(Amount obj)
    {
        if (rs == obj.rs && paisa == obj.paisa)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Amount money1(2, 66), money2(3, 32), money3(2, 66);

    if (money1 < money2)
    {
        cout << "This will get printed since money1 is smaller than money2" << endl;
    }
    if (money1 > money2)
    {
        cout << "This will not get printed since money1 is not greater than money2" << endl;
    }
    if (money1 == money3)
    {
        cout << "This will get printed since money1 is equals to money3" << endl;
    }
}