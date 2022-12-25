#include <iostream>
using namespace std;

class A{
    public:

    void fun1() {
        cout << "Inside Function 1" << endl;
    }
};
// inherited to class A
class B: public A{

    public:
    void fun2() {
        cout << "Inside Function 2" << endl;
    }
};
// inherited to Class A
class C: public A{

    public:
    void fun3() {
        cout << "Inside Function 3" << endl;
    }
};


int main() {
    
    A object1;
    object1.fun1();

    B object2;
    object2.fun1();

    C object3;
    object3.fun1();


    return 0;
}