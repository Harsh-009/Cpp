#include <iostream>
using namespace std;

class Complex{
    int a, b;
    public:
    // creating constructor
        Complex (int a, int b);

        void printNum() {
            cout << "The number is " << a << " + " << b << "i" << endl;
        }
};

Complex:: Complex(int a, int b) {   // parameterised constructor takes arguments
    this->a = a;
    this->b = b;
    
}

int main() {
    Complex c(5, 7);    // implicit call
    c.printNum();

    Complex b = Complex(3, 9);  // explicit call
    b.printNum();


    return 0;
}