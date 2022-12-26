#include <iostream>
using namespace std;

class Student{
    private:
        string name;
        int age = 10;
        int height;
    
    public:
        int getAge() {
            return this->age;
        }
        void setAge(int age) {
            this-> age = age;
        }
};

int main() {

    Student s1;
    s1.setAge(1);

    cout << s1.getAge() << endl;

    return 0;
}