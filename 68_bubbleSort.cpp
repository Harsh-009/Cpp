#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {

    for(int i = 0; i<n-1; i++) {

        bool swapped = false;

        for(int j = 0; j < n-i-1; j++) {

            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);

                swapped = true;
            }
        }

        if (swapped == false) {
            break;
        }
    }

    cout << "The sorted array is as follows :" << endl;

    for(int i = 0; i<n ; i++) {

        cout << "Element " << i+1 << " : " << arr[i] << endl;
    }

}

int main() {

    int arr[6] = {10, 1, 7, 6, 14, 9};

    bubbleSort(arr, 6);

    return 0;
}