#include <iostream>
#include <map>
// complexity -> O(log n)
using namespace std;
int main () {
  map <int, string> m;

  m[1] = "Jett";
  m[3] = "Phoenix";
  m[2] = "Reyna";
  // where m{key}, and the names are the value corresponding to the key.

  m.insert( {5, "chamber"} );   // another way of inserting

  // output will be sorted in case of map but unsorted in case of unordered_map

  cout << "<-- Before Erase -->" << endl;
  for(auto i:m) {
    cout << i.first << " -> " << i.second << endl;
  }cout << endl;

  cout << "Finding 5 -> " << m.count(5) << endl;

  m.erase(3); // erasing 3

  cout << "<-- After Erase -->" << endl;
  for(auto i:m) {
    cout << i.first << " -> " << i.second << endl;
  }cout << endl;

  auto it = m.find(5);

  for(auto i=it; i!=m.end(); i++) {
    cout << (*i).first << endl;
  }

}
