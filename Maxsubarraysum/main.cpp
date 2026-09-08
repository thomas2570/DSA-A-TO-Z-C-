#include <iostream>

using namespace std;

void MaxsubArray(int arr[], int n)
{
    int maxSum = arr[0];
    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            int currSum = 0;

            for (int i = st; i <= end; i++)
            {
                currSum += arr[i];
            }

            cout << currSum << ", ";
            maxSum = max(maxSum, currSum);
        }
        cout << endl;
    }
    cout << "Maximum Subarray Sum: " << maxSum << endl;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    MaxsubArray(arr, n);

    return 0;
}