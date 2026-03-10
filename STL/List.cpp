#include<bits/stdc++.h>
using namespace std;

void explainList() {
    std::cout << "A list is a sequence container that allows non-contiguous memory allocation. It is implemented as a doubly linked list, which means that each element in the list contains a pointer to the next and previous elements. This allows for efficient insertion and deletion of elements at any position in the list, as it does not require shifting elements like in a vector. However, accessing elements in a list is slower than in a vector, as it requires traversing the list from the beginning or end to reach the desired element." << std::endl;

   list<int>ls;
    ls.push_back(10); // {10}
    ls.push_back(20); // {10,20}
    ls.push_front(5); // {5,10,20}
    ls.emplace_back(30); // {5,10,20,30}
    ls.emplace_front(1); // {1,5,10,20,30}

    // rest function same vector
    // begin , end, size , empty , swap , clear , pop_back , pop_front


}   
int main() {
    // list is a container which can hold multiple values of same data type.
    // It is defined in the <list> header file.
    
    explainList();
    
    return 0;
}
