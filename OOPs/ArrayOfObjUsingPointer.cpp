#include <iostream> 
using namespace std;

class shop {
    int id;
    float price;

    public:
        void setdata(int id, float price) {
            this->id = id;
            this->price = price;
        }
        void getdata() {
            cout << "The id of the item is " << id << endl;
            cout << "The price of the item is " << price << endl;
        }
};

int main() {

    int size = 3;
    shop *ptr = new shop[size];
    int p, q;
    for(int i=0; i<size; i++) {
        cout << "Enter id and price of item " << i+1 << endl;
        cin >> p >> q ;
        ptr->setdata(p, q);
        ptr++;
    }
    for(int j=0; j<size; j++) {
        cout << "Item number : " << j+1 << endl;
        ptr->getdata();
        ptr++;
    }


    return 0;
}