#include<iostream>
using namespace std;
// printing this pattern
//                     *
//                    **
//                   ***
//                  ****
int main() {
    int n;
    cout<<"Enter any number :"<<" ";
    cin >>n;

    
    int i=1;
    while (i<=n) {
        // printing space 
        int space = n-i;
        while (space) {
            cout <<" ";
            space--;
        }
        // printing stars
        int j = 1;
        while (j<=i) {
            cout <<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
}