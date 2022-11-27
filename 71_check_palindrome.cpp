#include <iostream>
using namespace std;

char toLowerCase(char ch) {
    if(ch>='a' && ch<='z') {
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char str[],int len) {
    int s=0, e=len-1;

    while(s<=e) {
        if(toLowerCase( str[s] ) != toLowerCase( str[e])) {
            return 0;
        }

        else{
            s++;
            e--;
        }
    }
    return 1;
}

int strlength(char name[]) {
    int count = 0;
    for(int i=0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main () {
    char name[20];

    cout << "Enter the string : ";
    cin >> name;

    int len= strlength(name);

    cout << "Palindrome or not : " << checkPalindrome(name, len);
}