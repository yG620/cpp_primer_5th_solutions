//
//  ex7_07.cpp
//  Exercise 7.7
//
//  Created by yG620 on 20/8/9
//
#include <iostream>
#include <string>
#include "ex7_06.hpp"

using namespace std;

int main()
{
    Sales_data total;
    if (read(cin, total)) {
        Sales_data trans;
        while (read(cin, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            }
            else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    }
    else {
        cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
