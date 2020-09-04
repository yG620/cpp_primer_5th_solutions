//
//  ex8_04.cpp
//  Exercise 8.4
//
//  Created by yG620 on 20/8/17
//

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void ReadFileToVector(ifstream& input, vector<string>& svec) {
    input.open("book_sales.txt", ifstream::in);

    if (input) {
        string buf;
        while (getline(input, buf)) svec.push_back(buf);
    }
}

int main() {
    ifstream input;
    vector<string> svec;

    ReadFileToVector(input, svec);
    for (auto& line : svec) cout << line << endl;

    return 0;
}
