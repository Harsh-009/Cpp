#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number";
    cin >>n;

    int i = 1;
    while (i<=n) {

        // printing space
        int space = n - i;
        while (space) {
            cout<<" ";
            space = space - 1;
        }
        
        //printing triangle 1;
        int j = 1;
        while (j<=i) {
            cout <<j;
            j++;
        }

        //printing triangle 2;
        int k = i - 1;
        while (k) {
            cout <<k;
            k = k-1;
        }
        cout <<endl;
        i = i + 1;
    }
}