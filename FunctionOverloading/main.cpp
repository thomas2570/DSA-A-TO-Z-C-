#include<iostream>
using namespace std;
 int sum(int a, int b){
    cout<<(a+b)<<endl;
    return a + b;
 }

 double sum(double a , double b){
    cout<< (a+b)<<endl;
    return a + b;
 }

 int main(){
    sum(2,3);
    sum(23,34);
    sum(1.5,2.5);
 }