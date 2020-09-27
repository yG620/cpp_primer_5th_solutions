//
//  ex10_31.cpp
//  Exercise 10.31
//
//  Created by yG620 on 20/9/11
//
//  @Brief      >  Update the program from the previous exercise so that it
// prints only the unique elements. Your program should use unqiue_copy (§
// 10.4.1, p. 403).
//
//  @KeyPoint   1.

#include <algorithm>
#include <deque>
#include <fstream>
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
    cout << "Please enter the integers: ";
    istream_iterator<int> int_in_iter(cin), int_eof_iter;

    vector<int> ivec(int_in_iter, int_eof_iter);
    cout << "Raw         results:     ";
    printSequence(ivec);

    sort(ivec.begin(), ivec.end());

    cout << "unique copy results:     ";

    unique_copy(ivec.begin(), ivec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
