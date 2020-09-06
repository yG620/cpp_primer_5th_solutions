//
//  ex10_07.cpp
//  Exercise 10.7
//
//  Created by yG620 on 20/9/5
//
//  @Brief      >  
//  @KeyPoint    

#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

template <typename Sequence> void print(Sequence const& seq) {
    for (const auto& element : seq)
        cout << element << " ";
    cout << endl;
}

int main(int argc, char const *argv[]) {    
    //a
    vector<int> ivec;
    list<int> ilist;
    int i;

    while (cin >> i) {
        ilist.push_back(i);
    }
    // copy(ilist.cbegin(), ilist.cend(),ivec.begin());
    copy(ilist.cbegin(), ilist.cend(), back_inserter(ivec));
    
    // (b)
    vector<int> v;
    v.reserve(10);
    fill_n(v.begin(), 10, 0);
    // ^ (b)No error, but not any sense. v.size() still equal zero.
    // Fixed: 1. use `v.resize(10);`
    //    or  2. use `fill_n(back_inserter(v), 10, 0)`

    print(ivec);
    // print(v);

    return 0;
}
