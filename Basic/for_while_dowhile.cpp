#include<iostream>
using namespace std;
int main(){
    // i = 1
    // i =2
    // i = 3
    // i = 4
     // i = 5
     // i = 6 (Stop because 6 is not less than or equal to 5)
    // for(int i = 1; i <= 5; i++){
    //     cout<<"Thomas"<<i<<endl;
    // }
        
    //  int i = 1;
    // while(i<=5){
    //     cout<<"Thomas"<<i<<endl;
    //     i = i+1;
    // }


    // do while loop is first execute the code and then check the condition
    // first time it get executed irrespective of what condition you are given
    
    int i = 2;
    do{
        cout<<"Thomas"<<i<<endl;
        i = i+1;
    }while(i<=1);
    cout<<"Value of i is "<<i<<endl;

    return 0;
}