#include <iostream>
using namespace std;

int main () {
    // using integer datatype
    int a = 123;
    cout << a << endl;
    // using character datatype
    char b = 'a';
    cout << b << endl;
    // using boolean
    bool bl = true;
    cout << bl << endl;
    // using float
    float f = 1.2;
    cout << f << endl;
    // using double
    double d = 1.34;
    cout << d << endl;

    // Using "sizeof" func;
    int size = sizeof(a);
    cout<< "size of a is "<<size << endl;
}