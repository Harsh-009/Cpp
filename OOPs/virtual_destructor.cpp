#include <iostream>
using namespace std;

class base {
    public:
    virtual ~base() {
        cout << "Base destructor called" << endl;
    }
};

class derived: public base{
    public:
    ~derived() {
        cout << "Derived Constructor called" << endl;
    }
};

int main() {
    base* ptr = new derived();  // pointer of base class , object of derived class
    delete ptr; // deleting pointer of object of base class


    // if virtual is not used in base class destructor then the derived destructor will be never called. which results in memory leakage.

    return 0;

}