#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;                     //assume n = 6 (000000000 110)
    
    n = (-1) * n;            //ignore this while reading  comment example (n = 6) here

    int ans = 0;
    int bit = 0;
    int i = 0;

    int mask = 0;               // mask = 0 (00000000000)
    mask = ~(mask & 0);           //mask = ~(00000000000 & 0000000000) = ~(0000000000) = -1 (11111111111 in binary)

    n = n ^ mask;                    // n = (000000000000000 110) ^ (111111111111) = (1111111111111 001) 1's complement
    n = n + 1;                       // n = (11111111111111 001) + 1(0000000000 1) = -6 (11111111111 010) 2's complement

    mask = ~(1 << 31);          //mask = ~(0000000000000 1) << 31 = ~(1 00000000000000) brining 1 from lsb to msb
//                                                                =  (0 11111111111111)
    
    n = n & mask;                         // n = (11111111111 010) & (0 1111111111111) = (0111111111111 010)

    int a = 9;
    while(a >= 0)
    {
        bit = n & 1;

        ans = (bit * powf(10, i) ) + ans;
        
        i++;
        n = n >> 1;
        a--;
    }
    cout << endl;
    cout << ans;

    cout << "\n\n";
    return 0;
}