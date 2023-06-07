#include <iostream>
using namespace std;

// abstract class
class Shape{
    public:
    virtual void makeShape() = 0;   // pure virtual function 
};

class rectangle: public Shape{
    public:
    void makeShape() {
        cout << "Making Rectangle boss.." << endl;
    }
};

class square: public Shape {
    public:
    void makeShape() {
        cout << "Making Square boss.." << endl;
    }
};

int main() {
    rectangle r;
    square s;

    r.makeShape();
    s.makeShape();

    return 0;
}