#include <iostream>
#include <list>
using namespace std;

int main () {
  list <int> l;
  // randrom access is not possible as it is based on the doubly linked list

  l.push_back(2);
  l.push_front(1);

  for(auto i:l) {
    cout << i << " ";
  }
  cout << endl;

  // using erase function
  l.erase(l.begin());
  for(auto i:l) {
    cout << i << " ";
  }cout << endl;

  list<int> n(5, 10); // size of list is 5 and all the elements are initialised with 10
  for(auto i:n) {
    cout << i << " " ;
  }
  cout << endl;
}
