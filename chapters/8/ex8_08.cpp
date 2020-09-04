//
//  ex8_07.cpp
//  Exercise 8.7
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
    ifstream inputFileName(argv[1]);
    ofstream outputFileName(argv[2], ofstream::out | ofstream::app); // ofstream::out can omit;
                                                                     // files associated with an ofstream are opened in out mode

    Sales_data total;
    if (read(inputFileName, total)) {
        Sales_data trans;
        while (read(inputFileName, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(outputFileName, total) << endl;
                total = trans;
            }
        }
        print(outputFileName, total) << endl;
    } else {
        cerr << "No data?!" << std::endl;
        return -1;
    }
    return 0;
}
