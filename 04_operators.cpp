#include <iostream>
using namespace std;

int main() {

    // arithmetic operators
    int a = 2/5; // int/int -> int // float/int -> float // double/int -> double
    cout << a << endl;

    cout << 2.0/5 << endl;

    // Relational Operators
    int a1 = 2;
    int b = 3;

    bool first = (a1==b);
    cout << first << endl;

    bool second = (a1<b);
    cout << second << endl;

    bool third = (a1>b);
    cout << third << endl;

    bool fourth = (a1!=b);
    cout << fourth << endl;

    // Logical Operators
    int x = 23;
    cout << !x << endl; 
    // There are also && and || operators which are basically used with the conditional statements.
}