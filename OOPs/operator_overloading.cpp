#include <iostream>
using namespace std;

class A {
    public :
    int a;
    int b;

    int operator+ (A &obj) {
        int val1 = this->a;
        int val2 = obj.a;
        return val2-val1;
    }
};


int main() {

    A obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    cout << obj1+obj2 << endl;

    return 0;
}