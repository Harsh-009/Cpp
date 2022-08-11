#include <iostream>
using namespace std;

// 1 -> prime
// 0 -> not prime
bool isPrime (int num) {
    
    for (int i = 2; i <num; i++) {
        
        if (num % i == 0) {
            return 0;
        }
    }
    
    return ;
}

int main () {
    int num;
    cout <<"Enter a number : ";
    cin >> num;
    
    if (isPrime(num)) {
        cout << "is a prime no." << endl;
    }
    else {
        cout << "is not prime" << endl;
    }
    return 0;
}