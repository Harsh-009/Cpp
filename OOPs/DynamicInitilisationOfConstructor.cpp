#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {};
    BankDeposit(int p, int y, float r); // here r can be float value 
    BankDeposit(int p, int y, int r);   // here r can be int value
    void show();
};

BankDeposit :: BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    
    for(int i=0; i<y; i++)
    {
        returnValue = returnValue * (1+r);
    }
}

BankDeposit :: BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    
    for(int i=0; i<y; i++)
    {
        returnValue = returnValue * (1+interestRate);
    }
}

void BankDeposit:: show() 
{
    cout << "principal value was " << principal << endl << "Return Value after " << years << " years is " << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2;
    int p, y;
    float r;
    int R;

    cout << "Enter the values : " << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the values : " << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();

    return 0;
}