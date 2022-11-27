#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

#define max_str_len 20

int main () {
    string a;

    // push a single character to a string
    a.push_back('H');
    a.push_back('a');
    a.push_back('r');
    a.push_back('s');
    a.push_back('h');
    cout << "The entered string : " << a << endl;

    // size of the string
    int size = a.size();
    cout << "The size of string is " << size << endl;
    
    int size2 = a.length();
    cout << "The length of string is " << size2 << endl;

    int maxSize = a.max_size();
    cout << "Max size of string : " << maxSize << endl; // maximum potential length 

    int cap = a.capacity();
    cout << "Capacity : " << cap << endl; // may not equal to length 

    // int clear = a.clear();  "Used to clear the string"

    cout << "Empty or not : " << a.empty() << endl;

    // resize the string 
    a.resize(20);

    a.shrink_to_fit();    // shrink the size to fit the string 
    cout << "Capacity after shrink : " << a.capacity() << endl;

    string str;
    cout << "Enter the string" << endl;
    cin.getline (str, max_str_len, '$');

    return 0;
}