#include <iostream>
using namespace std;

bool search(int arr[], int size, int key) {

    for (int i=0; i<size; i++) {

        if (arr[i] == key) {
            return 1;
        }
    }

    return 0;
}

int main () {

    int arr[] = {3, 5, -4, 73, 23, 18, 9, -84, 0, 1};

    cout << "Enter the element, which you want to search : ";
    int key;
    cin >> key;

    bool found = search (arr, 10, key);

    if( found ) {
        cout << "Key is present" <<endl;
    }
    else {
        cout << "Key is not present" <<endl;
    }

    return 0;
}