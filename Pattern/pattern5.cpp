
// Pattern 5 
// * * * * *
// * * * *
// * * *
// * *
// *

#include<iostream>
using namespace std;
void pattern5(){
    for(int i = 1;i<=5;i++) {
        for(int j = 0;j<= 5-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    pattern5();
}