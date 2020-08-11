//
//  ex7_03.cpp
//  Exercise 7.3
//
//  Created by yG620 on 8/8/8.
//
#include <iostream>
#include <string>
#include "ex7_02.h"

using namespace std;

int main()
{
    Sales_data total;
    if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            }
            else {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }
    else {
        cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
