//
//  ex10_28.cpp
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
//  @KeyPoint   1.

#include <algorithm>
#include <deque>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

using namespace std;

template <typename Sequence>
void printSequence(Sequence const& seq) {
    for (const auto& element : seq) cout << element << " ";
    cout << endl;
}

int main(int argc, char const* argv[]) {
    vector<int> ivec = {1, 8, 3, 5, 7};
    vector<int> ivec1, ivec2;
    deque<int> deque3;

    cout << "Raw:           ";
    printSequence(ivec);

    cout << "Inserter:      ";
    copy(ivec.begin(), ivec.end(), inserter(ivec1, ivec1.begin()));
    printSequence(ivec1);

    cout << "BackInserter:  ";
    copy(ivec.begin(), ivec.end(), back_inserter(ivec2));
    printSequence(ivec2);

    cout << "FrontInserter: ";
    copy(ivec.begin(), ivec.end(), front_inserter(deque3));
    printSequence(deque3);

    return 0;
}
