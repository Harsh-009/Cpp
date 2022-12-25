#include <iostream>
using namespace std;

typedef struct student{

    string name;
    int roll_no;
    int marks;

}s;

int main() {
    s Harsh;

    Harsh.name = "Harsh";
    Harsh.roll_no = 10;
    Harsh.marks = 50;

    cout << "The value is " << Harsh.name << endl;
    cout << "The value is " << Harsh.roll_no << endl;
    cout << "The value is " << Harsh.marks << endl;
    

    return 0;
}