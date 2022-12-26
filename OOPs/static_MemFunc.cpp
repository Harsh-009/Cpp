#include <iostream>
using namespace std;

class Employee {
    int id;
    static int count;   

    public:
        void setdata(void) {
            cout << "Enter the id:" ;
            cin >> id;
            count++;
        }
        void getdata(void) {
            cout << "The id of the employee is " << id << endl;
        }

        static void getcount() {    // static function cannot access other data members
            cout << "The employee number is " << count << endl;
        }
};

int Employee :: count = 0;// by default initialized with zero

int main() {
    Employee e1, e2, e3;
    e1.setdata();
    e1.getdata();
    Employee::getcount();

    e2.setdata();
    e2.getdata();
    Employee::getcount();

    e3.setdata();
    e3.getdata();
    Employee::getcount();

    return 0;
}