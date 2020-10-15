//
//  ex10_17.cpp
//  Exercise 10.17
//
//  Created by yG620 on 20/9/7
//
//  @Brief      >  Rewrite exercise 10.12 from § 10.3.1 (p. 387) to use a
// lambda in the call to sort instead of the compareIsbn function.
//
//  @KeyPoint   1. 

#include <algorithm>
#include <fstream>
#include <iostream>
#include <list>
#include <vector>

#include "../7/ex7_26.h"

using namespace std;

int main(int argc, char const *argv[]) {
    vector<Sales_data> sdv;
    Sales_data sd;
    ifstream in(argv[1]);
    if (!in) {
        cout << "Failed to open input file! " << endl;
        exit(1);
    }

    while (read(in, sd)) {
        sdv.push_back(sd);
    }

    stable_sort(sdv.begin(), sdv.end(),
                [](const Sales_data &lhs, const Sales_data &rhs) {
                    return lhs.isbn() < rhs.isbn();
                });

    for (auto &element : sdv) {
        print(cout, element);
        cout << endl;
    }

    return 0;
}
