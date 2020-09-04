//
//  ex8_06.cpp
//  Exercise 8.6
//
//  Created by yG620 on 20/8/18
//

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "../7/ex7_06.hpp"

using namespace std;

int main(int argc, char const *argv[]) {
    ifstream ifs(argv[1]);

    Sales_data total;
    if (read(ifs, total)) {
        Sales_data trans;
        while (read(ifs, trans)) {
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
