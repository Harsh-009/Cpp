#include <iostream>
// we can also include class as a header file using its filename
// #include "class.cpp"
using namespace std;

class Hero{


    // properties
    private:
    int health = 10;
    public:
    char level;
    // creating constructor
    Hero() {
        cout << "constructor called" << endl;
    }
    
    // creating parameterised consturcutor
    Hero(int health) {
        cout << "this -> " << this << endl;
        this -> health = health;
    }

    // void print() {
    //     cout << level <<endl;
    // }

    int gethealth() {
        return health;
    }
    void sethealth(int health) {
        health = h;
    }

    void setlevel(char l) {
        level = l;
    }
    char getlevel() {
        return level;
    }


};

int main() {

    // static memory allocation "concept of padding"
    Hero h1(10); // hero type ka object or basically instance of class "Hero"
    cout << "Address of ramesh " << &h1 << endl;
    int health2 = h1.gethealth();
    cout << health2 << endl;

    Hero suresh(70, 'C');

    // copy suresh to R
    Hero R(suresh);

    // h1.health = 70;
    // h1.level = 'A';

    // // dynamic memory allocation
    // Hero *b = new Hero();
    // b->health = 70;
    // b->level = 'A';
    // cout << "level is " << b->level << endl;
    // cout << "health is " << b->health << endl;

    
    // cout << "level -> " << h1.getlevel() << endl;

    // cout << "Size : " << sizeof(h1) << endl;

    // cout << "Health -> " << h1.health << endl;
    // cout << "level -> " << h1.level << endl;

    // using getter and setter "Setter and getter should be public"
    // h1.setlevel('a');
    // cout << h1.getlevel() << endl;

    return 0;
}