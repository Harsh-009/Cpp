// printing 1 to n numbers one by one using while loop

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter input" << endl;
    cin >> n;

    int i = 1;
    while (i <= n) 
    {
        cout <<i<<endl;
        i++;
    }
}