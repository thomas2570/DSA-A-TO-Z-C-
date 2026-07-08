#include<isostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = factorial(num);
    cout << "The factorial of " << num << " is: " << result << endl;
    return 0;
}