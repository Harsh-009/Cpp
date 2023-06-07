#include <iostream>
using namespace std;

//      a
//     / \ 
//    b   c
//     \ /
//      d

class a{
    public: 
    virtual void call() {
        cout << "Inside a " << endl;
    }
};

class b: virtual public a{
    public:
    void call() {
        cout << "Inside b " << endl;
    }
};

class c: virtual public a {
    public:
    void call() {
        cout << "Inside c " << endl;
    }
};

class d: public b, public c {
    public: 
    void call() {
        cout << "Inside d" << endl;
    }
};

int main() {
    a* ptr = new a();
    a* ptr2 = new b();
    a* ptr3 = new c();
    a* ptr4 = new d();

    ptr->call();
    ptr2->call();
    ptr3->call();
    ptr4->call();

    return 0;
}