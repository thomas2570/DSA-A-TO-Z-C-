#include<bits/stdc++.h>
using namespace std;

void explainQueue(){
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1, 2}
    q.push(4); //{1, 2, 4}

    q.back() += 5; 

    cout<<q.back()<<endl; //9
    //  Q is still {1, 2, 9}

    cout<<q.front()<<endl; //1

    q.pop(); //{2, 9}
    cout<<q.front()<<endl; //2

    // size swap empty same as stack
}

int main() {
    // queue is a container which can hold multiple values of same data type.
    // It is defined in the <queue> header file.
    
    explainQueue();
    
    return 0;
}