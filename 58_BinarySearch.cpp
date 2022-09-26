#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while(start <= end) {

        // comparing key with mid element
        if(arr[mid] == key) {
            return mid;
        }

        // moving the start to right part of the mid element
        else if(key >= arr[mid]) {
            start = mid + 1;
        }

        // moving the end to the left part of the mid element
        else {
            end = mid - 1;
        }

        mid = start + (end - start)/2;
    }

    return -1;
}

int main () {
    
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 12);

    cout << "The 12 is present at index : " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 14);

    cout << "The 14 is present at index : " << oddIndex << endl;

    return 0;
}