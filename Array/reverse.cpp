
// With extra space;

#include <iostream>
#include <vector>
using namespace std;

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
}
// int main()
// {
//     int arr[] = {5, 4, 3, 9, 2};
//     int n = sizeof(arr) / sizeof(int);

//     vector<int> copyArr(n);
//     for (int i = 0; i < n; i++)
//     {
//         int j = n - i - 1;
//         copyArr[i] = arr[j];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = copyArr[i];
//     }
//     printArr(arr, n);
//     return 0;
// }

// without extra space ( 2 pointer approach)
int main()
{
    int arr[] = {5, 4, 3, 9, 2};
    int n = sizeof(arr) / sizeof(int);

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printArr(arr, n)

        return 0;
}