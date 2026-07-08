#include<iostream>
using namespace std;

int sum(int a, int b){
    int sum = a+b; // a and b are the parameters of the function sum
    return sum;
}
int main(){
    int s = sum(5, 10); // 5, 10 are the arguments passed to the function sum and fixed values
    cout << "The sum is: " << s << endl;
    return 0;
}