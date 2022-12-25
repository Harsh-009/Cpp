#include <iostream>
using namespace std;

class A{
    public:
    void fun() {
        cout << "I am A" << endl;
    }
};

class B{
    public:
    void fun() {
        cout << "I am B" << endl;
    }
};
// inherited to Class A and Class B
class C: public A, public B{

};


int main() {
    
    C obj;
    obj.A:: fun();
    obj.B:: fun();


    return 0;
}