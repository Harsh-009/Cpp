#include <iostream>
using namespace std;

int power () {
    int a ,b;
    cout << "Enter the number : " ;
    cin >> a>> b ;
    int ans = 1;

    for (int i = 1; i <= b; i++) {
        
        ans = ans * a;
    }

    return ans ;
}
int main () {

    int answer = power ();
    cout <<"Answer is "<< answer <<endl;

    answer = power ();
    cout <<"Answer is "<< answer <<endl;

    answer = power ();
    cout <<"Answer is "<< answer <<endl;

    return 0;
}