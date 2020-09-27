//
//  ex11_33.cpp
//  Exercise 11.33
//
//  Created by yG620 on 20/9/18
//
//  @Brief      > Implement your own version of the word-transformation
// program.
//
//  @KeyPoint   bug1: error: cannot bind ‘std::ostream {aka
//  std::basic_ostream<char>}’ lvalue to ‘std::basic_ostream<char>&&’ cout <<
//  word.second << endl;
//
//  @KeyPoint   fix1: word is not pair type.

#include <algorithm>
#include <cctype>
#include <fstream>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, const char** argv) {
    map<string, string> rules;
    vector<string> out_file;

    ifstream rules_ifs(argv[1]);
    ifstream rawdata_ifs(argv[2]);

    string word, sentence;

    while (rules_ifs >> word) {
        while (getline(rules_ifs, sentence)) {
            break;
        }
        rules.insert(make_pair(word, sentence));
    }

    while (rawdata_ifs >> word) {
        auto iter = rules.find(word);
        if (iter != rules.end()) {
            out_file.push_back(rules[word]);
            out_file.push_back("\n");
        }
        else {
            out_file.push_back(word);
            out_file.push_back("\n");
        }
    }

    for (const auto& word : out_file) {
        cout << word;
    }

    return 0;
}
