#include <iostream>
using namespace std;

// calculating the nearby root i.e 37 is 6.
long long int sqRoot(int n) {

    int s = 0;
    int e = n;

    long long int mid = s + (e-s)/2;

    long long int ans = -1;

    while(s<=e) {

        long long int square = mid*mid;

        if(square == n) {
            return mid;
        }
        if(square < n) {
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}

// making the root more precise
double morePrecesion(int n, int precesion, int tempSol) {
    double factor = 1;
    double ans = tempSol;

    for (int i=0; i<precesion; i++) {
        factor = factor/10;

        for(double j=tempSol; j*j<n; j=j+factor) {
            ans = j;
        }
    }

    return ans;
}


int main() {
    int x;

    cout << "Enter a number : ";
    cin >> x;

    int tempSol = sqRoot(x);

    cout << "Answer is " << morePrecesion(x, 3, tempSol);

    return 0;
}