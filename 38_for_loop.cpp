#include<iostream>
using namespace std;
//Using break in this for loop
int main () {
    int n;
    cout <<"Enter the value of n : "<<" ";
    cin >>n ;

    bool isPrime = 1;
    int i;
    for (i = 2; i<n; i++) {
        
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0) {
        cout <<"Not a Prime NO."<<" ";
    }
    else {
        cout <<"Prime NO.";
    }
}