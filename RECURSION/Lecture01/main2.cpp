#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
void print(){
    if(cnt ==3) return;
    cout<<cnt<<endl;
    cnt++;
    print();

}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("Input.txt","r", stdin);
    freopen("Input.txt","w", stdout);
    #endif
    print();
    return 0;
}