//
//  ex10_12.cpp
//  Exercise 10.12
//
//  Created by yG620 on 20/9/6
//
//  @Brief      > Write a function named compareIsbn that compares the
// isbn() members of two Sales_data objects. Use that function to sort a
// vector that holds Sales_data objects.
//
//  @KeyPoint   1. variable: item1 --> lhs, item2 --> rhs
//              2. inline bool compareIsbn();
//              3. check if the input file is valid.

#include <algorithm>
#include <fstream>
#include <iostream>
#include <list>
#include <vector>

#include "../7/ex7_26.h"

using namespace std;

bool compareIsbn(const Sales_data& item1, const Sales_data& item2) {
    return item1.isbn() < item2.isbn();
}

int main(int argc, char const* argv[]) {
    vector<Sales_data> sd;
    Sales_data trans;
    ifstream in(argv[1]);
    if (!in) {
        cout << "Failed to open input file! " << endl;
        exit(1);
    }

    while (read(in, trans)) {
        sd.push_back(trans);
    }

    stable_sort(sd.begin(), sd.end(), compareIsbn);

    for (auto& element : sd) {
        print(cout, element);
        cout << endl;
    }

    return 0;
}
