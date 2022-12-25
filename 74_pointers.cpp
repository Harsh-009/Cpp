#include <iostream>
using namespace std;

int main() {
    int a = 10;

    int *p;
    *p = a;  // It can be either p = &a
    int **p1 = &p;

    cout << "The address of the pointer p is " << p << endl;
    cout << "The value at p is " << *p << endl;
    cout << "The value at pointer to pointer p is " << **p1 << endl;
}