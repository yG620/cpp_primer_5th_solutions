//
//  ex10_27.cpp
//  Exercise 10.27
//
//  Created by yG620 on 20/9/10
//
//  @Brief      > In addition to unique (§ 10.2.3, p. 384), the library
// defines function named unique_copy that takes a third iterator denoting a
// destination into which to copy the unique elements. Write a program that
// uses unique_copy to copy the unique elements from a vector into an
// initially empty list.
//
//  @KeyPoint   1. unique_copy: Only the first element of each group of equal elements is copied.

#include <algorithm>
#include <iostream>
#include <vector>
#include <iterator>
#include <list>

using namespace std;

template <typename Sequence>
void PrintSequence(Sequence const& seq) {
    for (const auto& element : seq) cout << element << " ";
    cout << endl;
}
 
int main(int argc, char const* argv[]) {
    vector<int> ivec = { 1, 8, 3, 3, 5, 5, 7, 7, 1 };
    list<int> slist;

    cout << "Raw:                   ";
    PrintSequence(ivec);

    unique_copy(ivec.begin(), ivec.end(), inserter(slist, slist.begin()));
    cout << "Unique copy to list:   ";
    PrintSequence(slist);

    return 0;
}
