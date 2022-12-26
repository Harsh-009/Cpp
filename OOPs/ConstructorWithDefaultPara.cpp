#include <iostream>
using namespace std;

class Simple
{
    int data1, data2;

public:
    Simple(int a, int b = 9)
    {
        data1 = a;
        data2 = b;
    }
    void printdata();
};

void Simple ::printdata()
{
    cout << "The value of data is " << data1 << " and " << data2 << endl;
}

int main()
{
    Simple s(1); // the value of b is 9 with default arguments
    s.printdata();

    return 0;
}