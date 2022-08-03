#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter any number :"<<" ";
    cin >>n;

    
    int i=1;
    while (i<=n) {
        int j = 1;
        while (j<=i) {
            char start = 'A'+i+j-2;
            cout <<start;
            j++;
        }
        i++;
        cout<<endl;
    }
}