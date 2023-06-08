#include <iostream>
using namespace std;

template <typename T1, typename T2>
void myFunction(T1 a, T2 b) {
    cout << a + b << endl;
}

int main() {
    myFunction(15, 23.5);

    return 0;
}