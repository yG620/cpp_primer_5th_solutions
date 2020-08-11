//
//  ex7_11.cpp
//  Exercise 7.11
//
//  Created by yG620 on 20/8/9
//
#include <iostream>
#include <string>
#include "ex7_11.hpp"

using namespace std;

int main()
{
    Sales_data item1;
    print(cout, item1) << endl;

    Sales_data item2("0-201-78345-X");
    print(cout, item2) << endl;

    Sales_data item3("0-201-78345-Y", 10, 21.50);
    print(cout, item3) << endl;

    Sales_data item4(cin);
    print(cout, item4) << endl;

    return 0;
}
