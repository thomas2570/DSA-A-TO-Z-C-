#include <iostream>
using namespace std;

int main()
{
    int x = 5, y = 10;
    int *ptr1 = &x, *ptr2 = &y;

    cout << ptr2 << "\n";
    cout << ptr1 << "\n";
    cout << &x << "\n";
    return 0;
}