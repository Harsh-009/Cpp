#include <iostream>
using namespace std;

int main() {
    int n;
    cout <<"enter any number : "<< endl;
    cin >> n;

    int i = 1;
    // Initialising loop
    while (i<=n) {
            int j=1;
            while(j<=n) {
                cout<<i;
                j++;
            }
        cout<<endl;
        i++;
    }
}