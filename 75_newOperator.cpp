#include <iostream>
using namespace std;

class A{
    int a, b;
    float c;
    double d;

    public :
        void setValue(int a, int b) {
            this->a = a;
            this->b = b;
        }

        void printvalue(){
            cout << "The value of a and b is " << a << ", " << b << endl;
        }
};

int main() {
    
    A *obj = new A();   // allocating memory dynamically to the object
    obj->setValue(4, 2);
    obj->printvalue();

    delete obj; // deallocating the dynamically allocated space

    return 0;
}