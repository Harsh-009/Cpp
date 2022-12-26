#include <iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    void bark() {
        cout << "Barking" << endl;
    }
};

class Human{

    public:
    string color;

    void speak() {
        cout << "Speaking" << endl;
    }
};

class Hybrid: public Animal, public Human{

};


int main() {
    Hybrid h;
    h.speak();
    h.bark();


    return 0;
}