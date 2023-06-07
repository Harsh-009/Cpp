#include <iostream>
using namespace std;

// Virtual function is used to call derived class function through the pointer object of Base class

class Animal{
    public:
    virtual void speak() {
        cout << "Speaking..." << endl;
    }
};

class dog: public Animal{
    public:
    void speak() {
        cout << "Barking..." << endl;
    }
};

int main() {
    Animal* a = new Animal();
    Animal* b = new dog();

    a->speak();
    b->speak();

    return 0;
}