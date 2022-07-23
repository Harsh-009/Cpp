// program to demonstrate if else conditional statement
// This program is to checkout whether the number is positive, negative or zero.

#include <iostream>
using namespace std;

int main() {
    int n ;
    
    // taking input from the user
    cout<<"Enter Number :" ;
    cin>> n ;

    if (n>0)
    {
        cout<< "N is positive" <<endl;
    }
    else if(n<0) {
        cout<< "N is negative" <<endl;
    }
    else{
        cout<< "N is zero";
    }
}