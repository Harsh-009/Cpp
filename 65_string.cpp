#include <iostream>
#include <string.h>
using namespace std;

void traverseString(string &str, int n) {

    for(int i=0; i<n; i++) {

        if(str[i] == ' ') {
            cout << endl;
        }

        else{
            cout << str[i];
        }
    }
}

int main () {
    
    string str[1000] ;

    cout << "Enter the string : ";
    cin >> str;

    int n = str.length();

    traverseString(str, n);

    return 0;
}