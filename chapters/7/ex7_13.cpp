//
//  ex7_13.cpp
//  Exercise 7.13
//
//  Created by yG620 on 20/8/9
//
#include <iostream>
#include <string>

#include "ex7_11.hpp"

using namespace std;

int main() {
    Sales_data total(cin);
    if (!total.isbn().empty()) {
        istream &is = cin;
        while (is) {
            Sales_data trans(cin);
            if (!is) break;
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    } else {
        cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
