#include<iostream>
using namespace std;
//Easy method of pattern 17
int main() {
    int n;
    cout<<"Enter any number :"<<" ";
    cin >>n;

    
    int i=1;
    while (i<=n) {

        int j = 1;
        char start = 'A'+i-1;
        while (j<=n) {
            cout <<start;
            start++;
            j++;
        }
        i++;
        cout<<endl;
    }
}