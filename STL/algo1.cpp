#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main () {

  vector<int> v;

  v.push_back(1);
  v.push_back(3);
  v.push_back(5);
  v.push_back(7);

  cout << "Finding 5 -> " << binary_search(v.begin(), v.end(), 5) << endl;  // if found then return 1 or vice versa

  cout << "lower bound -> " << lower_bound(v.begin(), v.end(), 5)-v.begin() << endl;  // return iterator for the value given
  cout << "Upper bound -> " << upper_bound(v.begin(), v.end(), 7)-v.begin() << endl;

  int a=3;
  int b=5;

  cout << "max -> " << max(a,b) << endl;
  cout << "min -> " << min(a,b) << endl;

  swap(a, b) ;
  cout << "a and b are -> " << a << ", " << b << endl;

  string str = "Chamber";
  reverse(str.begin(), str.end());
  cout << "After reversing, string is -> " << str << endl;

  rotate(v.begin(), v.begin()+2, v.end());
  cout << "after rotate -> " ;
  for(int i:v) {
    cout << i << " ";
  } cout << endl;


  sort(v.begin(), v.end());
  cout << "after sorting -> " ;
  for(int i:v) {
    cout << i << " " ;
  }cout << endl;

}
