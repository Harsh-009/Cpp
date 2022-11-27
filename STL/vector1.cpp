#include <iostream>
// vector header file is included for using vector container
#include <vector>
using namespace std;

int main () {

    vector<int> v;

    // capacity before inserting an element is 0.
    cout << "Capacity -> " << v.capacity() << endl;

    // inserting element in the vector
    v.push_back(8);
    cout << "Capacity -> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity -> " << v.capacity() << endl;

    // when the size of the array is small and an element is inserted, then it doubles the size of the vector array.
    v.push_back(7);
    cout << "Capacity -> " << v.capacity() << endl;

    // printing the size of the array, not the capacity
    cout << "Size -> " << v.size() << endl;

    // printing element at a specific index
    cout << "The element at 2nd index -> " << v.at(2) << endl;

    // printing before pop back
    for (int i:v) {
        cout << i << " " ;
    }cout << endl;

    // using v.pop_back
    v.pop_back();

    // printing after pop back
    for (int i:v) {
        cout << i << " " ;
    }cout << endl;

    cout << "Before clear, vector size : " << v.size() <<endl;

    v.clear();

    cout << "After clear, vector size : " << v.size() <<endl;

    v = {1, 2, 3, 4, 5};

    // traversing the vector
    for(int i=0; i<v.size(); i++) {
        cout << "Vector at ith pos is " << v.at(i) << endl;
    }

    vector<int> last(5, 3);

    for(int i:last) {
        cout << i << " ";
    }cout << endl;

    cout << v.capacity() << endl;


    return 0;
}
