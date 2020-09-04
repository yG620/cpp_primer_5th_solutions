//
//  ex8_10.cpp
//  Exercise 8.10
//
//  Created by yG620 on 20/8/19
//

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    ifstream ifs(argv[1]);
    if (!ifs) {
        cerr << "No data?" << endl;
        return -1;
    }

    vector<string> lineVec;
    string strLine;

    while (getline(ifs, strLine)) {
        lineVec.push_back(strLine);
    }

    for (auto &line : lineVec) {
        string word;
        istringstream iss(line);
        while (iss >> word) cout << word << endl;
    }

    return 0;
}
