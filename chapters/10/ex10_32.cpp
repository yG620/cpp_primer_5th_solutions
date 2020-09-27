//
//  ex10_32.cpp
//  Exercise 10.32
//
//  Created by yG620 on 20/9/13
//
//  @Brief      >  Rewrite the bookstore problem from § 1.6 (p. 24) using a
// vector to hold the transactions and various algorithms to do the processing.
// Use sort with your compareIsbn function from § 10.3.1 (p. 387) to
// arrange the transactions in order, and then use find and accumulate to
// do the sum.
//
//  @KeyPoint   1. a error in print function. 2. a compile error assigning vec

#include <algorithm>
#include <deque>
#include <fstream>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

#include "../../include/Sales_item.h"

using namespace std;

// print the results of sequence
template <typename Sequence>
void printSequence(Sequence const& seq) {
    for (const auto& element : seq) cout << element << " ";
    cout << endl;
}

// main function
int main(int argc, char const* argv[]) {
    ifstream in(argv[1]);
    if (!in) {
        cout << "Failed to open input file! " << endl;
        exit(1);
    }
    
    // vector<Sales_item> vec(istream_iterator<Sales_item>(in),
    //                        istream_iterator<Sales_item>());

    istream_iterator<Sales_item> in_iter(in), eof_iter;
    vector<Sales_item> vec;

    while (in_iter != eof_iter) {
        vec.push_back(*in_iter++);
    }

    // print error
    // cout << "Raw data:   " << endl;
    // for (auto& element : vec) {
    //     print(cout, element);
    //     cout << endl;
    // }
    // cout << endl;

    // sort by ISBN
    sort(vec.begin(), vec.end(), compareIsbn);

    // method 1
    // auto l = vec.begin();
    // while (l != vec.end()) {
    //     auto item = *l;
    //     auto r = find_if(l + 1, vec.end(), [item](const Sales_item& item1) {
    //         return item1.isbn() != item.isbn();
    //     });
    //     cout << accumulate(l + 1, r, item) << endl;
    //     l = r;
    // }

    // method 2 
    auto beg = vec.cbegin(), end = beg;
    while (beg != vec.cend()) {
        end = find_if(beg, vec.cend(), [beg](const Sales_item& item) {
            return item.isbn() != beg->isbn();
        });
        cout << accumulate(beg, end, Sales_item(beg->isbn())) << endl;
        beg = end;
    }

    return 0;
}
