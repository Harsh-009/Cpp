#include <iostream>
using namespace std;

int count = 0;
// Destructor never takes an argument and nor does it return value
class Simple
{
public:
    Simple(){
        count++;
        cout<<"Constructor called for count : " << count << endl;
    }
    ~Simple(){
        cout << "Destructor called for count : " << count << endl;
        count--;
    }
};


int main() {
    Simple obj1;
    {
        cout << "<-- Entering Block -->" << endl;
        cout << "Creating Objects : " << endl;
        Simple obj2, obj3;
        cout << "<-- Exiting Block -->" << endl;
    }
    cout << "Back to main -> " << endl;
    

    return 0;
}