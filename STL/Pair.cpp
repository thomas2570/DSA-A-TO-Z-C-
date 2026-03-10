#include<bits/stdc++.h>
using namespace std;

int main() {

    // pair is a container which can hold two values of different data types.
    // It is defined in the <utility> header file.

	pair<int,int>p={1,2};
	cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>>p1={1,{2,3}};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    pair<int,int>a[]={{1,2},{3,4},{5,6}};
    cout<<a[0].first<<" "<<a[0].second<<endl;

    






	return 0;
}


