#include <iostream>
using namespace std;

class A {
    int x;
    public :
    
    A() {
        x = 10;
    }
    friend class B;
};

class B {
    public :
    void display(A &obj) {
        cout << "The value is " << obj.x << endl;
    }
};

int main() {
    A obj;
    B obj2;
    obj2.display(obj);

    return 0;
}