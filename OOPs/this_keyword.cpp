#include <iostream>
using namespace std;

class A {
    int a ;

    public:

    void setdata(int a) {
        this->a = a;
    }

    int getdata() {
        cout << "Value -> " << a << endl;
    }
};

int main() {

    A a;

    a.setdata(10);
    a.getdata();
}