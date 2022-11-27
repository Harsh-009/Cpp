#include <iostream>
#include <stack>

using namespace std;

int main () {
  stack<string> s;

  s.push("Jett");
  s.push("Reyna");
  s.push("Harbor");

  cout << "Top Element -> " << s.top() << endl;

  s.pop();
  cout << "Top Element after pop -> " << s.top() << endl;

  cout << "Size -> " << s.size() << endl;

  cout << "Empty or not -> " << s.empty() << endl;
}
