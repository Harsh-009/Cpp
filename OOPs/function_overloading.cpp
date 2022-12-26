#include <iostream>
using namespace std;

class A{

    public:
        int sum(int a, int b) {
            return a+b;
        }

        int sum(int a, int b, int c) {
            return a+b+c;
        }
};


int main() {
    A obj;
    cout << obj.sum(2, 3) << endl;
    cout << obj.sum(3, 4, 5) << endl;

    return 0;

}