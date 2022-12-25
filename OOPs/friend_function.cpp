#include <iostream>
using namespace std;

class Complex{
    int a, b;

    friend Complex sumComp(Complex, Complex);
    public :

    void setter(int n1, int n2){
        a = n1;
        b = n2;
    }
    void printNum() {
        cout << "The number is " << a << " + " << b << "i" << endl; 
    }
};

Complex sumComp(Complex o1, Complex o2) {
    Complex o3;
    o3.setter((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main() {
    Complex o1, o2, sum;
    o1.setter(4, 3);
    o1.printNum();
    o2.setter(5, 7);
    o2.printNum();

    sum = sumComp(o1, o2);
    sum.printNum();

    return 0;
}