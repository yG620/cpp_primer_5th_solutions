//
//  ex11_09.cpp
//  Exercise 11.09
//
//  Created by yG620 on 20/9/16
//
//  @Brief      > Define a map that associates words with a list of line
// numbers on which the word might occur.
//
//  @KeyPoint   1. bug: error: expected unqualified-id before ‘[’ token 
//                 fix: using WordLineNo = map<string, list<int>>; WordLineNo can not be used directly.


#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <list>
#include <string>
#include <algorithm>

using namespace std;
using WordLineNo = map<string, list<int>>;
 
int main(int argc, char *argv[]) {
    ifstream ifs(argv[1]);
    string line;
    string word;
    int lineno = 0;
    WordLineNo Words;

    while (getline(ifs, line)) {
        ++lineno;
        istringstream word_line(line);

        while (word_line >> word) {             
            Words[word].push_back(lineno);          
        }       
    }

    for (const auto &word : Words) {
        cout << word.first << " is on the ";
            for (const auto & lineno : word.second)
                cout <<  lineno  << " line." << endl;
    }

    return 0;
}
