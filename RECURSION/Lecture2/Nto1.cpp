#include<bits/stdc++.h>
using namespace std;
void f(int n, int i){
    if(i<1){
        return;
    }
    cout << i << " ";
    f(n,i-1);
}
int main(){
    int n;
    cin>>n;
    f(n,n);
    return 0;
}