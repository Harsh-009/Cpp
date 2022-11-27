#include <iostream>
#include <deque> // deque header

using namespace std;

int main() {

  deque<int> d;

  d.push_back(3); // pushing element from back
  d.push_front(2); // pushing element from front
  cout << "The elements are : " << endl;
  for(auto i: d) {
    cout << i << " ";
  }cout << endl;

  // d.pop_front(); // removing element from front
  // cout << "After pop_front function : " << endl;
  // for(auto i: d) {
  //   cout << i << " ";
  // }
  // cout << endl;

  cout << "Printing first Index element : " << d.at(0) <<endl;

  // using empty function
  cout << "Empty or not : " << d.empty() <<endl;

  // using erase function
  cout << "Before erase, size -> " << d.size() << endl;
  d.erase(d.begin(), d.begin()+1);
  cout << "After erase, size -> " << d.size() << endl;
}
