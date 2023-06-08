#include <iostream>
using namespace std;

template<typename t>
void fun(t a) {
    cout << a  << end;
}

template<typename t, typename y> 
void fun(t a, y b) {
    cout << a + b << endl;
}

int main() {
    fun(1, 2);
    fun(1, 23.4);

    return 0;
}