#include <iostream>
using namespace std;

void printArr(int arr[], int size) {
    cout << "Printing the array : " << endl;

    for (int i = 0; i <= size; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main () {
    int arr[10] = {1, 2, 3, 4, 5};
    printArr(arr, 10);

    //initialising an array with zero
    int arr2[5] = {0};
    printArr(arr2, 5);

    int SizeOfArr = sizeof(arr) / sizeof(int);
    cout << "Size of array is " << SizeOfArr <<endl;

    cout << "Printing Done!" <<endl;
}