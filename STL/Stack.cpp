//LIFO 

#include<bits/stdc++.h>
using namespace std;



void explainStack(){
    stack<int> st;
    st.push(1);// {1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(3); //{3,3,2,1}
    st.emplace(5); //{5,3,3,2,1}

    cout<<st.top()<<endl; //5 "**st[2] is invalid"
    st.pop(); //{3,3,2,1}
    cout<<st.top()<<endl; //3
    st.pop(); //{3,2,1}
    st.size(); //3
    st.empty(); //false
 
    stack<int>st1, st2;
    st.swap(st2);

}
int main() {
    // stack is a container which can hold multiple values of same data type.
    // It is defined in the <stack> header file.
    
    explainStack();
    
    return 0;
}