// When two or more constructor are used in single class, then it is called constructor overloading
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    Complex(int a)
    {
        this->a = a;
        b = 0;
    }

    void printNum()
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex a(5, 7);
    a.printNum();

    Complex b(8);
    b.printNum();

    Complex c;
    c.printNum();

    return 0;
}