vector<int>v(2,100)
//(100,100)
v.insert(v.begin(),300);
//(300,100,100)

v.insert(v.begin()+1,2,10);
//(300,10,10,100,100)

vector<int>copy(2,50);
v.insert(v.end(),copy.begin(),copy.end()) // {50,50,300,10,10,100,100}

// {10,20}
cout<<v.size(); // 2 
// size() returns the number of elements in the vector, which is 2 in this case.

v.pop_back(); // removes the last element from the vector, which is 20 in this case. After this operation, the vector will contain {10}.
// {10}

//v1 = {10,20}
//v2 = {30,40}

v.swap(v2);// swap the contents of v and v2. After this operation, v will contain {30,40} and v2 will contain {10,20}.
 // v1 -> {30,40} , v2 -> {10,20}

v.clear(); //  erase the entire vector

cout<<v.empty(); // 1 (true) because the vector is now empty after the clear() operation.
}
