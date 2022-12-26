#include <iostream>
using namespace std;

class Employee {
    int id;
    static int count;   // by default initialized with zero

    public:
        void setdata(void) {
            cout << "Enter the id:" ;
            cin >> id;
            count++;
        }
        void getdata(void) {
            cout << "The id of the employee is " <<id << " and this is employee number " << count << endl;
        }
};

int Employee :: count;

int main() {
    Employee e1, e2, e3;    // note that if i want to store count of employee, there is a count in every single employee
                            // to solve this i have to use static so that count must be same for all objects
    e1.setdata();
    e1.getdata();

    e2.setdata();
    e2.getdata();

    e3.setdata();
    e3.getdata();

    return 0;
}