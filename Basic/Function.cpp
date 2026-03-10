#include<iostream>
using namespace std;
// function are set of code which performs something for you
// function are used to modularize your code and to avoid code repetition
// function are used to increase the readability of your code
// function are used to use same code multiple times
// function are used to break a big problem into smaller problem

// void - which does not return anything
// return type - which return something
// parameter - which is used to pass some value to the function
// non parameter - which does not take any value from the user

// void printName(string name){
//     cout<<"Hello "<<name<<endl;
// }
// int main(){
//     string name;
//     cin>>name;
//     printName(name);

//     string name2;
//     cin>>name2;
//     printName(name2);
   
//     return 0;
// }

// take two number from the user and return their sum
int sum(int a, int b){
    cin>>a>>b;
    int c = a + b;
    cout<<c;
    return 0;

    // pass by value - which is used to pass the value of the variable to the function
    // pass by reference - which is used to pass the reference of the variable to the function
    
}