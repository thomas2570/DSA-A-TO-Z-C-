
// Pattern 6
// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include<iostream>
using namespace std;
void pattern6(){
    for(int i = 1;i<=5;i++) {
        for(int j = 1;j<= 5-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pattern6();
}