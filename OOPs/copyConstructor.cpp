#include <iostream>
using namespace std;

class Simple
{
    int x; 

public:
    Simple()
    {
        x = 0;
    }

    Simple(int x)
    {
        this->x = x;
    }

    Simple(Simple &obj)
    {
        cout << "Copy constructor called" << endl;
        this->x = obj.x;
    }
    void display()
    {
        cout << "The value of x is " << x << endl;
    }
};

int main()
{
    Simple sim, obj(5), num(obj);
    sim.display();
    obj.display();
    num.display();  // when no copy constructor found, then compiler create its own copy constructor

    return 0;
}