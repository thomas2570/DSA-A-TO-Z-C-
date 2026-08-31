#include <iostream>
using namespace std;

void decToBin(int decNum)
{
    int n = decNum;
    int pow = 1; // 10^0 10^1 10^2........
    int binNum = 0;

    while (n > 0)
    {
        int rem = n % 2;
        binNum += rem * pow;
        n = n / 2;
        pow = pow * 10;
    }

    cout << binNum << endl;
}

int main()
{
    decToBin(4);
    return 0;
}