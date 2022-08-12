#include <iostream>
using namespace std;

void update (int arr[], int n) {

    cout << "Inside the function" <<endl;

    //update
    arr[0] = 120;

    for (int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout <<endl;
    cout << "Going Back to main function" <<endl;
    
}

int main () {
    int arr[] = {1, 2, 3};

    update (arr, 3);

    //printing the array
    cout << "After Updation" <<endl;
    for (int i = 0; i<3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Everything is Fine !" <<endl;

    return 0;
}