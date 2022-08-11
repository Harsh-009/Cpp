#include <iostream>
using namespace std;

int main () {
    int arr[10] = {1, 2, 3, 4, 5};

    int n = 10;

    //using for loop
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    //initialising an array with zero
    int arr2[5] = {0};
    n = 5;
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << endl;
    }

    // initialising an array with one [which is not possible]
    int arr3[5] = {1};

    return 0;
}