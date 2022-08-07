#include <iostream>
using namespace std;

// caluculating factorial 
int fact (int n) {
    
    int fact = 1 ;

    for ( int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

// nCr = n! / r! * ( n - r! )
int ncr (int n, int r) {
    
    int num = fact (n);

    int denom = fact (r) * fact (n - r);

    int ans = num / denom ;

    return ans ;
}

// main function
int main () {
    int n, r;
    cin >> n >> r ;

    cout <<"Answer is " << ncr(n , r) << endl;

}