#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the value of n" << ": ";
    cin >> n;

    int i = 1;
    for ( ; ;) {
        if (i <= n) {
            cout << i<<endl;
        }
        else {
            break;
        }
        i++;
    }


// multiple conditions, variables and updation in for loop

    for(int a = 0, b = 1; a>=0 && b>=1; a--, b--) {
        cout << a <<" "<< b << endl;
    }

}