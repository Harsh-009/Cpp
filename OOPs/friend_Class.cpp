#include <iostream>
using namespace std;

class Complex;

class calculator{
    public:
        int SumRealComplex(Complex, Complex);
        int SumVirComplex(Complex, Complex);
};


class Complex{
    int a, b;

    friend int calculator :: SumRealComplex(Complex , Complex);
    friend int calculator :: SumVirComplex(Complex, Complex);

    public :

    void setter(int n1, int n2){
        a = n1;
        b = n2;
    }
    void printNum() {
        cout << "The number is " << a << " + " << b << "i" << endl; 
    }
};

int calculator :: SumRealComplex(Complex o1, Complex o2) {
    return (o1.a + o2.a);
}

int calculator :: SumVirComplex(Complex o1, Complex o2) {
    return (o1.b + o2.b);
}


int main() {
    Complex o1, o2, sum;
    o1.setter(4, 3);
    o1.printNum();
    o2.setter(5, 7);
    o2.printNum();

    calculator calc;
    int result = calc.SumRealComplex(o1, o2);
    cout << "The sum is " << result  << " + " << calc.SumVirComplex(o1, o2) <<"i"<< endl;
    
    return 0;
}