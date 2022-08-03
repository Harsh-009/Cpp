#include <iostream>
using namespace std;

int main () {
    int a = 2;
    int b = 3;
    
    // Bitwise Operators
    cout <<"a&b : "<<(a&b)<<endl;
    cout <<"a|b : "<<(a|b)<<endl;
    cout <<"~a  : "<<(~a)<<endl;
    cout <<"a^b : "<<(a^b)<<endl;

    // Shift operators
    cout << (17<<2) <<endl;
    cout << (19<<1) <<endl;
    cout << (17>>2) <<endl;
    cout << (19>>1) <<endl;

    // Increment/Decrement Operators
    int i = 7;
    cout << ++i <<endl; //8
    cout << i++ <<endl; //8
    cout << i-- <<endl; //9
    cout << --i <<endl; //7
}