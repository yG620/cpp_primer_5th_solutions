//
//  ex10_17.cpp
//  Exercise 10.17
//
//  Created by yG620 on 20/9/7
//
//  @Brief      >  Rewrite exercise 10.12 from § 10.3.1 (p. 387) to use a
// lambda in the call to sort instead of the compareIsbn function.
//
//  @KeyPoint   1. auto count = words.end() - wc;

#include <algorithm>
#include <iostream>
#include <list>
#include <vector>
#include <fstream>

#include "../7/ex7_26.h"

using namespace std;

bool compareIsbn(const Sales_data & item1, const Sales_data & item2) {
    return item1.isbn() < item2.isbn();
}

int main(int argc, char const* argv[]) {
    vector<Sales_data> s;
    Sales_data trans;
    ifstream in(argv[1]);
    if (!in) {
        cout << "Failed to open input file! " << endl;
        exit(1);
    }

    while ( read(in, trans)) {
        s.push_back(trans);
    }

    stable_sort(s.begin(), s.end(), [](const Sales_data &lhs, const Sales_data &rhs) 
                                        { return lhs.isbn() < rhs.isbn();});

    for (auto &element : s) {
        print(cout, element);
        cout << endl;
    }
    
    return 0;
}
