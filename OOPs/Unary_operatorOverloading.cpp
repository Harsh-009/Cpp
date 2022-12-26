#include <iostream>
using namespace std;

class Count{
    int value;

    public:
        Count() {
            value = 6;
        }

        void operator ++ () {
            ++value;
        }

        void display() {
            cout << "Count : " << value << endl;
        }
};

int main() {
    Count obj;

    ++obj;
    obj.display();

    return 0;
}