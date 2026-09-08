// optmize Solution for Maximum Subarray Sum problem
#include <iostream>

using namespace std;

void MaxsubArray2(int arr[], int n)
{
    int maxSum = arr[0];
    for (int st = 0; st < n; st++){ // start = 2
         int currSum = 0;
        for (int end = st; end < n; end++){ // end = 2,3,4,5,
            currSum += arr[end];

            // cout << currSum << ", ";
            maxSum = max(maxSum, currSum);
        }
    }
    cout << "Maximum Subarray Sum: " << maxSum << endl;
}

int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    MaxsubArray2(arr, n);

    return 0;
}