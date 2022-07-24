#include <iostream>
using namespace std;

int main() {
    int f;
    cout << "Enter temp in farhenhiet : " << endl;
    cin >> f;

    int c;
    c = (f-32)*5/9;
    cout <<"The temp in celcius is "<<c<<endl;
}