#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number :" << endl;
    cin >>n;

    int sum=0 , i=0;
    // loop initialisation
    while (i<=n)
    {
        sum = sum + i;
        i = i + 2;
    }

    cout <<"Value of sum is "<<sum<<endl;
}