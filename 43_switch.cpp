#include <iostream>
using namespace std;

int main () {

    int num = 2;

    cout <<endl;

    switch ( num ) {

        case 1: cout << "First" << endl;
                break;

        case 2: switch (num) {
            cout << "the number is " <<num <<endl;
        }
                break;

        default : cout << "It is default case" <<endl;

    }

    cout <<endl;
}