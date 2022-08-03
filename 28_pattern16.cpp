#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter any number :"<<" ";
    cin >>n;

    char start = 'A';
    int i=1;
    while (i<=n) {
        int j = 1;
        while (j<=i) {
            cout <<start;
            start = start + 1;
            j++;
        }
        i++;
        cout<<endl;
    }
}