// Wap to create 2 classes Tola gram. Takwe tola as input from user & convert it into gram.
// Use  user defined to user defined conversion.

#include <iostream>
using namespace std;

class Tola
{
private:
    float weight;

public:
    Tola()
    {
        weight = 0;
    }
    Tola(float w)
    {
        weight = w;
    }
    float get_weight()
    {
        return weight;
    }
    void display()
    {
        cout << weight << " Tola" << endl;
    }
};

class Gram
{
private:
    float weight;

public:
    Gram()
    {
        weight = 0;
    }
    Gram(float w)
    {
        weight = w;
    }

    Gram(Tola T)
    {
        float tola = T.get_weight();
        weight = tola * 11.66;
    }
    void display()
    {
        cout << weight << " Grams" << endl;
    }
};

int main()
{
    Tola t(4.29);
    Gram g(t);
    t.display();
    g.display();
    return 0;
}