#include<iostream>
#include<vector>
using namespace std;

      int main() {
          explain_vector();
          return 0;
      }
void explain_vector(){
    // A vector is a dynamic array that can grow or shrink in size.
    // It is defined in the <vector> header file.
    vector<int>v; // declaration of a vector of integers
    v.push_back(1); // adding elements to the vector
    v.emplace_back(2); // adding elements to the vector

    vector<pair<int,int>>vec; // declaration of a vector of pairs of integers
    vec.push_back({1,2}); // adding elements to the vector
    vec.emplace_back(3,4); // adding elements to the vector

    vector<int>V(5,100); // declaration of a vector of integers with size 5 and all elements initialized to 100
    vector<int>(5); // declaration of a vector of integers with size 5 and all elements initialized to 0
    vector<int>v1(5,20); // declaration of a vector of integers with size 5 and all elements initialized to 20
    vector<int>v2(v1); // declaration of a vector of integers with size 5 and all elements initialized to the values of v1


}