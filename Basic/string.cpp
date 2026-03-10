#include<iostream>
using namespace std;

int main(){
    string s = "Thomas";
    // cout<<s[0]<<endl;
    // s[0] = 'R';
    // cout<<s<<endl;

    int length = s.length();
    s[length-1] = 'y';

    cout<<s[length-1];

    return 0;
}