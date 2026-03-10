

#include<bits/stdc++.h>
using namespace std;


void explainDeque() {
    deque<int>dq;
    dq.push_back(10); // {10}
    dq.push_back(20); // {10,20}
    dq.push_front(5); // {5,10,20}
    dq.emplace_back(30); // {5,10,20,30}
    dq.emplace_front(1); // {1,5,10,20,30}

    dq.pop_back(); //{1,5,10,20} removes the last element from the deque, which is 30 in this case. After this operation, the deque will contain {1,5,10,20}.
    dq.pop_front(); // {5,10,20} removes the first element from the deque, which is 1 in this case. After this operation, the deque will contain {5,10,20}. 

    dq.back() = 100; // {5,10,100} modifies the last element of the deque to 100. After this operation, the deque will contain {5,10,100}.
    dq.front() = 50; // {50,10,100} modifies the first

    // rest function same vector
    // begin , end, size , empty , swap , clear
}
int main() {
    // deque is a container which can hold multiple values of same data type.
    // It is defined in the <deque> header file.
    
    explainDeque();
    
    return 0;
}