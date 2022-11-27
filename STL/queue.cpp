#include <iostream>
#include <queue>
using namespace std;

int main () {

  queue<string> q;
  // it uses the concept of FIFO

  q.push("Jett");
  q.push("Reyna");
  q.push("Sova");
  q.push("Viper");

  cout << "First element before pop -> " << q.front() << endl;
  q.pop();
  cout << "First element after pop -> " << q.front() << endl;
}
