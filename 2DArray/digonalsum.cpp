#include<iostream>
using namespace std;

int diagonalSum(int mat[][4], int n){
    int sum = 0;
    for(int i = 0;i<n;i++){ // rows
        for(int j = 0;j<n;j++){ // cols 
   if(i == j){
    sum += mat[i][j];
   } else if(j == n-i-1){
    sum += mat[i][j];
   }
        }
    }

    cout <<"sum= " << sum << endl;
    return sum;
}


int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    diagonalSum(matrix, 4);

      int matrix2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    diagonalSum(matrix2, 3); // isme common element 5 hai to overlaping nhi hoga isliye sum = 25 hoga 

    return 0;

}


// Time complexity = O(n^2)