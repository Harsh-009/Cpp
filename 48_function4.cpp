#include <iostream>
using namespace std;

// printCounting function
void printCounting (int num) {

    for (int i = 1; i <= num; i++) {
        cout << i <<endl;
    }
}

//main function 
int main () {
    int num;
    cout << "Enter the number : " ;
    cin >> num;

    // calling function 
    printCounting(num);

    return 0;
}