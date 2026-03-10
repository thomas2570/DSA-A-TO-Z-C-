
// Pattern 18

// E
// D E
// C D E
// B C D E
// A B C D E


#include<iostream>
using namespace std;
void pattern18(int n){
    for(int i =0;i<n;i++){
        for(char ch = 'E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    pattern18(n);
}