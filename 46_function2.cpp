#include <iostream>
using namespace std;

// even -> 1
// odd -> 0
bool isEven (int num) {
    
    if (num&1) {
        return 0; // odd
    }
    else {
        return 1; // even
    }
}
int main () {

    int num ;
    cin >> num ;

    // printing the results
    if (isEven(num)) {
        cout << "Number is even"<<endl;
    }
    else {
        cout <<"Number is odd"<<endl;
    }

    return 0;

}