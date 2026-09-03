#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    float pi = 3.14;
    float *ptr2 = &pi;
    cout << &a << "=" << ptr << "\n";
    cout << &pi << "=" << ptr2 << "\n";
    return 0;
}