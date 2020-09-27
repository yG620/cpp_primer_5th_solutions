//
//  ex11_00.cpp
//  Exercise 11.00
//
//  Created by yG620 on 20/9/13
//
//  @Brief      > A classic example that relies on associative arrays is a
//  word-counting program.
//  @KeyPoint

#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(int argc, char const *argv[]) {
    map<string, size_t> word_count;  // empty map from string to size_t
    set<string> exclude = {"i", "world"};

    string word;

    while (cin >> word) {
        if (exclude.find(word) == exclude.end()) ++word_count[word];
    }

    for (const auto &w : word_count) {
        cout << w.first << " occurs " << w.second << " times" << endl;
    }

    return 0;
}
