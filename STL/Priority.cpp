#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq; // Max-heap by default

    // Inserting elements into the priority queue
    pq.push(10); // Insert 10 {10}
    pq.push(20); // Insert 20 {20, 10}
    pq.push(5); // Insert 5 {20, 10, 5}
    pq.push(15); // Insert 15 {20, 15, 5, 10}

    cout << "Top element (max): " << pq.top() << endl; // Should print 20

    // Removing the top element
    pq.pop();
    cout << "Top element after pop: " << pq.top() << endl; // Should print 15

    return 0;
    
}
