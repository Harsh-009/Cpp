#include <iostream>
#include <queue>

using namespace std;
int main () {
  // declaring max heap
  priority_queue<int> maxi; // give the greatest element first
  // declaring min heap
  priority_queue<int, vector<int>, greater<int> > mini; // gives the smallest element first

  maxi.push(1);
  maxi.push(2);
  maxi.push(3);
  maxi.push(4);

  cout << maxi.size() << endl;

  int n = maxi.size(); // storing size in n as the size decreases with the pop function
  for(int i=0; i<n; i++) {
    cout << maxi.top() << " "; // priting the element
    maxi.pop(); // popping out
  }
  cout << endl;

  mini.push(3);
  mini.push(17);
  mini.push(7);
  mini.push(9);
  mini.push(12);

  int m = mini.size();
  for(int i=0; i<m; i++) {
    cout << mini.top() << " ";
    mini.pop();
  }
  cout << endl;

  cout << "khaali or not -> " << mini.empty() << endl; // this time we have popped out all the elements

}
