#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {

    for(int i = 0; i < n-1; i++) {

        int minIndex = i;

        for(int j = i+1; j<n; j++) {

            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);
    }

    cout << "The sorted array is as follows : " << endl;

    for(int i = 0; i < n; i++) {

        cout << "Element " << i+1 << " : " << arr[i] << endl;
    }
}

int main() {
    
    int arr[5] = {1, 7, 9, 2, 3};

    selectionSort(arr, 5);

    return 0;
}