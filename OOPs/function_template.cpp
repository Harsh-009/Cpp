#include <iostream>
using namespace std;

template <typename T>
T fun(T a, T b) {
    return a+b;
}

int main() {
    int result = fun(10, 20);

    cout << result << endl;

    return 0;
}