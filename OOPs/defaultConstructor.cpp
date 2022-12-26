#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    // creating constructor
        Complex ();

        void printNum() {
            cout << "The number is " << a << " + " << b << "i" << endl;
        }
};

Complex:: Complex() {
    a = 10;
    b = 20;
}

int main() {
    Complex c;
    c.printNum();


    return 0;
}