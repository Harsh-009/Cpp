#include <iostream>
#include <iomanip>  // for setw manipulator
using namespace std;

int main() {
    int a = 3, b = 38, c = 3928;
    
    cout << "The value without setw is " << a << endl;
    cout << "The value without setw is " << b << endl;
    cout << "The value without setw is " << c << endl;
    
    cout << "The value with setw is " << setw(4) << a << endl;  // the setw sets the width parameter of the stream
    cout << "The value with setw is " << setw(4) << b << endl;  // out or in.
    cout << "The value with setw is " << setw(4) << c << endl;

    long double pi = 3.141592653;
    cout << "The value of pi without precision : " << pi << endl;
    cout << "Value with precision : " << setprecision(4) << pi << endl; // set precesion to 4 points only

    cout << "Value with showpoint : " << showpoint << 1.352 << endl;
    cout << "Value without showpoint " << noshowpoint << 1.352 << endl;

    return 0;
}