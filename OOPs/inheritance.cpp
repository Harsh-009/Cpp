#include <iostream>
using namespace std;

class Human {

    public:
        int age;
        int weight;
    protected:
        int height=4;

    public:
        int getAge() {
            return this-> age;
        }

        void setWeight(int w) {
            this->weight = w;
        }
};


class Male: public Human {
    public :
        string color;

    void sleep() {
        cout << "Male sleeping" << endl;
    }
    // member can be only accessed within the child class
    int getHeight() {
        return height;
    }
};



int main () {

    Male m1;
    cout << m1.getHeight() << endl;

    // Male object1;
    // cout << object1.age << endl;
    // cout << object1.weight << endl;
    // cout << object1.height << endl;

    // cout << object1.color << endl;

    // object1.sleep();


    // object1.setWeight(50);
    // cout <<  object1.weight << endl;

    return 0;
}