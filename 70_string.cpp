#include <iostream>
using namespace std;

int getlength(char name[]) {

    int count = 0;
    for(int i=0; name[i] != '\0'; i++) {
        count++;
    }

    return count;
}

void getreverse(char name[], int n) {

    int s=0;
    int e = n-1;
    while(s<e) {
        swap(name[s++], name[e--]);
    }
}

int main () {

    char name[20];

    // any type of space, tab will not be considered
    cout << "Enter the name" << endl;
    cin >> name ;
    // name[2] = '\0';

    cout << "Your name is " ;
    cout << name << endl;

    // length of string
    int length = getlength(name);
    cout << "length of string is : " << length << endl;

    // string reverse
    getreverse(name, length);
    cout << "after reverse -> " << name << endl;

    return 0;
}