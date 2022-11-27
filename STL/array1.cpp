#include <iostream>
#include <bits/stdc++.h>
// array header file is used in array container stl
#include <array>

using namespace std;

int main () {
    int arr[5] = {1, 2, 3, 4, 5}; // basic array

    array<int, 5> arr2 = {2, 4, 6, 8, 10}; // array in stl

    // deriving size of array
    int size = arr2.size();

    // printing elements of stl array
    for(int i=0; i<size; i++) {
        cout << "The array at index " << i <<" is " << arr2[i] << endl;
    }

    // deriving element at a specific index
    cout << "Element at 2nd index is " << arr2.at(2) << endl;

    // checking if there is any blank space in array or not
    cout << "Blank or not ->" << arr2.empty() <<endl;

    //printing first element
    cout << "First element ->" << arr2.front() << endl;

    // printing last element
    cout << "Last element ->" << arr2.back() << endl;

    array<int, 5> arr3;

    arr3.fill(10);

    for(int i=0; i<arr3.size(); i++) {
        cout << "arr[" << i << "]" << " = " << arr3[i] <<endl;
    }

    int it;
    for(auto it: arr3.begin(); it!=arr3.end(); it++) {
        cout << *it << " " ;
    }
}