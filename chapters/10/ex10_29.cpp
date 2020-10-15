//
//  ex10_29.cpp
//  Exercise 10.29
//
//  Created by yG620 on 20/9/11
//
//  @Brief      > Write a program using stream iterators to read a text file
// into a vector of strings.
//
//  @KeyPoint 1. When a istream iterator is constructed by default, a tail back iterator is obtained.
//  @KeyPoint 2. A good way is to initialize the container with istream_iterator.

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
    ifstream in(argv[1]);
    if (!in) {
        cout << "Failed to open input file! " << endl;
        exit(1);

    }

    // method 1
    // istream_iterator<string> str_it(in), str_eof;
    // vector<string> strvec;
    // while (str_it != str_eof) {
    //     strvec.push_back(*str_it++);
    // }

    // method 2: construct vec from an iterator range
    istream_iterator<string> str_it(in), str_eof;
    vector<string> strvec(str_it, str_eof);

    cout << "Results:    ";
    printSequence(strvec);

    return 0;
}
