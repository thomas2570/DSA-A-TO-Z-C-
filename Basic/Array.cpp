// when u have a similar data type being stored mutiple times
// array store contiguous memory location
#include <iostream>
using namespace std;

int main(){

   // int a, b ,c , d;
    //cin >> a >> b >> c >> d;
    // int arr[5];
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    //  arr[3] += 10;
    // cout<<arr[3];
   
      // 2D array used to lots of matrix and table problem
    int arr[3][5];

    arr[1][3] = 76;
    cout<<arr[1][3];


    return 0;
}