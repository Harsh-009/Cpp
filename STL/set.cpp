#include <iostream>
#include <iterator>
#include <set>

using namespace std; // element cann't be modified, they're either inserted or deleted
int main() {

  // size, begin, empty has the complexity -> big O(1)

  set<int> s;

  s.insert(5); // insert -> big O(log n)
  s.insert(5);
  s.insert(5);
  s.insert(7);
  s.insert(7);
  s.insert(9);
  s.insert(11);

  for(auto i:s) {
    cout << i << " "; // elements are printed in sorted ordered and same elements are only printed once.
  }
  cout << endl;

  // iterator is used to point at memory addresses of Stl containers
  set<int>::iterator it = s.begin();
  it++;

  s.erase(it);

  for(auto i:s) {
    cout << i << " ";
  }

  cout << endl;
  cout << "5 is present or not -> " << s.count(5) << endl;

  set<int>::iterator itr = s.find(5);

  for(auto it=itr; it != s.end(); it++) {
    cout << *it << " " ;
  }
  cout << endl;


}
