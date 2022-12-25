#include <iostream>
using namespace std;

class Base {
    int num; // by default private

    public:

        void getData() {
            cout << "Enter any integer : " ;
            cin>> num;
        }

        void showData() {
            cout << "The value is " << num << endl;
        }
};

int main() {
    Base obj;
    obj.getData();
    obj.showData();

    return 0;
}