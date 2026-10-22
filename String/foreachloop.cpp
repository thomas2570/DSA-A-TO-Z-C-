#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "Thomas Ramesh";

    // for(int i = 0;i<str.length(); i++){
    //     cout << str[i] <<" ";
    // }
    // cout << "\n";

    for(char ch : str){
        cout << ch <<" ";
    }
    cout << endl;
    return 0;
}