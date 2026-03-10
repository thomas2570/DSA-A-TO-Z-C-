#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v = {10,20,12,30};

vector<int>::iterator it = v.begin();
    // iterator is a pointer that points to the elements of a container.
    // It is defined in the <iterator> header file.

    cout<<*it<<endl; // dereferencing the iterator to get the value of the element it points to
    it++; // moving the iterator to the next element
    cout<<*it<<endl; // dereferencing the iterator to get the value of the element it points to

    it = it + 2; // moving the iterator to the next element
    cout<<*it<<endl; // dereferencing the iterator to get the value of the element it points to
    it = it - 2; // moving the iterator to the previous element
    cout<<*it<<endl; // dereferencing the iterator to get the value of the element it points to
    it = it + 1; // moving the iterator to the next element
    cout<<*it<<endl; // dereferencing the iterator to get the value of the
    // element it points to
    it = it - 1; // moving the iterator to the previous element
    cout<<*it<<endl; // dereferencing the iterator to get the value of the element it points to
    
    vector<int>::reverse_iterator it1 = v.rbegin();
    // reverse_iterator is a pointer that points to the elements of a container in reverse order.
    // It is defined in the <iterator> header file.
    cout<<*it1<<endl; // dereferencing the reverse iterator to get the value of the element it points to
    it1++; // moving the reverse iterator to the next element
    cout<<*it1<<endl; // dereferencing the reverse iterator to get the value of the element it points to

    it = it--;  // moving the iterator to the previous element
    cout<<*it<<endl; // dereferencing the iterator to get the value of the element it points to

    vector<int>:: iterator it = v.end();
    // end() returns an iterator that points to the past-the-end element in the vector.
    // It is defined in the <iterator> header file.
    
    vector<int>::reverse_iterator it = v.rend();
    // rend() returns a reverse iterator that points to the past-the-end element in the vector.
    // It is defined in the <iterator> header file.
    cout<<*it<<endl; // dereferencing the reverse iterator to get the value of the element it points to

    cout<<v[0]<<" "<<v.at(0)<<endl; // accessing the first element of the vector using the subscript operator and the at() function
    cout<<v[1]<<" "<<v.at(1)<<endl; // accessing the second

    cout<<v.back()<<endl; // accessing the last element of the vector using the back() function
    cout<<v.front()<<endl; // accessing the first element of the vector using the front

    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout<<*it<<" "; // dereferencing the iterator to get the value of the element it points to
    }


    for(auto it : v){
        cout<<it<<" "; // using range-based for loop to iterate through the vector
    }

    for(auto it = v.rbegin(); it != v.rend(); it++) {
        cout<<*it<<" "; // dereferencing the reverse iterator to get the value of the element it points to
    }

    for(auto it : v){
        cout<<it<<" "; // using range-based for loop to iterate through the vector in reverse order
    }

    //{10,20,12,30}
    v.erase(v.begin()+1); // erasing the second element of the vector
    //{10,12,30}

    //{10,20,12,20,35}
    v.erase(v.begin()+2,v.begin()+4); // erasing the third and fourth elements of the vector
    //{10,20,35}

    