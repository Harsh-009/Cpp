#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter any character" <<endl;
    cin >> ch;

    if (ch >= 97 && ch <= 122) {
        cout << "Lower Case";
    }
    else if (ch >= 65 && ch <= 90) {
        cout << "Upper Case";
    }
    else if (ch >= 48 && ch <= 57) {
        cout << "Numeric" ;
    }
}