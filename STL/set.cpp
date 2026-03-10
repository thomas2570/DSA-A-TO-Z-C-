#include<bits/stdc++.h>
using namespace std;
void explaindSet(){
    set<int>st;
    st.insert(1); // {1}
    st.insert(2); //{1,2}
    st.insert(2); // {1,2}
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}
    // functionality of insert in vector
    //can be used also, that only increases
    //effquency of code

    // begin(), end(), rebegin(), rend(), size(), empty() and swap() are also used in set

    //st.insert(st.end(),2); // {1,2,4,3,4,5}
    auto it = st.find(3);
    
    //{1,2,3,4,5}
    auto it = st.find(6);

    //{1,4,5}
    st.erase(5); // erase 5 // take logarithimic time

    int cnt = st.count(1);
    auto it = st.find(3);
    st.erase(it); // it takes constant time

    //{1,2,3,4,5}
  auto it1 = st.find(2);
  auto it2 = st.find(3);
  st.erase(it1,it2); // after erase {1,4,5} {first,last}
    
// lower_bound() and upper_bound() function work in the same way as in vector it does.

// This is the syntax
auto it = st.lower_bound(2);
auto it = st.upper_bound(3);
}

void explainMultiset(){
    // Everything is same as set
    //only store duplicates elements also

    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1); //{1,1,1}
    
    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    //only one single one erased
    ms.erase(ms.find(1), next(ms.find(1), 2));

    //rest all function same as set

}