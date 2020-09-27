//
//  ex11_12.cpp
//  Exercise 11.12
//
//  Created by yG620 on 20/9/16
//
//  @Brief      > Define a map that associates words with a list of line
// numbers on which the word might occur.

//  There are at least three ways to create the pairs in the program for the
//  previous exercise. Write three versions of that program, creating the pairs
//  in each way. Explain which form you think is easiest to write and
//  understand, and why.

//
//  @KeyPoint   1. bug: error: expected unqualified-id before ‘[’ token
//                 fix: using WordLineNo = map<string, list<int>>; WordLineNo
//                 can not be used directly.
// 


#include <algorithm>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <sstream>
#include <string>
#include <utility>

using namespace std;
using WordLineNo = map<string, list<int>>;

int main(int argc, char *argv[]) {
    ifstream ifs(argv[1]);
    string str;
    int num;
    vector<pair<string, int>> data;

    while (ifs >> str >> num) {
        // data.push_back(make_pair(str, num));
        // data.push_back({str, num});
        // data.push_back(pair<string,int>(str, num));
        data.emplace_back(str, num); //!! easiest way.
    }

    for (const auto &pair : data) {
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}
