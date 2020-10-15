//
//  ex10_30.cpp
//  Exercise 10.30
//
//  Created by yG620 on 20/9/11
//
//  @Brief    > Use stream iterators, sort, and copy to read a sequence
// of integers from the standard input, sort them, and then write them back to
// the standard output.
//
//  @KeyPoint 1. longest to shortest: use lambda method and bind method
//  @KeyPoint 2. It's easy to the standard output with istream_iterator.

#include <algorithm>
#include <deque>
#include <fstream>
#include <functional>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

using namespace std;
using namespace std::placeholders;

template <typename Sequence>
void printSequence(Sequence const& seq) {
    for (const auto& element : seq) cout << element << " ";
    cout << endl;
}

bool isLarger(const int& a, const int& b) { return a > b; }

int main(int argc, char const* argv[]) {
    cout << "Please enter the integers: ";
    istream_iterator<int> int_in_iter(cin), int_eof_iter;

    vector<int> ivec(int_in_iter, int_eof_iter);
    cout << "Raw  results:   ";
    printSequence(ivec);

    // sort method 1
    // sort(ivec.begin(), ivec.end());

    // sort method 2
    // sort(ivec.begin(), ivec.end(), [] (const int &num1, const int &num2) {
    // return num1 > num2; });

    // sort method 3
    sort(ivec.begin(), ivec.end(), bind(isLarger, _1, _2));

    cout << "Sort results:    ";
    // output method 1
    /* ostream_iterator<int> int_out_iter(cout, " ");  // Use Spaces as
    delimiters for (auto elem : ivec) { *int_out_iter++ = elem;
    }
    cout << endl; */

    // output method 2
    copy(ivec.begin(), ivec.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    return 0;
}
