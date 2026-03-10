
// Pattern/pattern9.cpp
// Print the following pattern for n = 5
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *


#include<iostream>
using namespace std;
void pattern7(){
    for(int i = 0;i<5;i++){
        for(int j = 0;j<5-i-1;j++){
            cout<<"  ";
        }
        for(int j = 0;j<2*i+1;j++){
            cout<<"* ";
        }
        for(int j = 0;j<5-i-1;j++){
            cout<<"  ";
        }
        cout<<endl;
    }
}
void pattern8(int n){
    for(int i = 0;i<n;i++){
        for(int j = 0;j<i;j++){
            cout<<"  ";
        }
        for(int j = 0; j < 2*n - (2*i + 1); j++){
            cout<<"* ";
        }
        for(int j = 0;j<i;j++){
            cout<<"  ";
        }
        cout<<endl;
    }

}

int main(){
    int n;
    cin>>n;
    pattern7();
    pattern8(n);
}