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

void ReadFileToVector(const string& fileName, vector<string>& vec) {
    ifstream ifs(fileName);
    if (ifs) {
        string buf;
        while (getline(ifs, buf)) {
            vec.push_back(buf);
        }
    }
}

int main() {
    vector<string> svec;
    ReadFileToVector("./book_sales.txt", svec);
    for (auto line : svec) cout << line << endl;

    return 0;
}
