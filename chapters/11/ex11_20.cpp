//
//  ex11_20.cpp
//  Exercise 11.20
//
//  Created by yG620 on 20/9/18
//
//  @Brief      > Rewrite the word-counting program from § 11.1 (p. 421) to
// use insert instead of subscripting. Which program do you think is easier to
// write and read? Explain your reasoning.
//
//  @KeyPoint   1.  ++(ret.first->second); the increment statement fetches the iterator for the element
// with the key word and increments the counter associated with the key we tried to insert.

#include <algorithm>
#include <cctype>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, const char** argv) {
    map<string, size_t> word_count;  // empty map from string to size_t
    string word;

    // method 1
    while (cin >> word)
        ++word_count[word];  // fetch and increment the counter for word

    // method 2
    // while (cin >> word) {
    //     auto ret = word_count.insert(make_pair(word, 1));
    //     if (!ret.second) {
    //         ++(ret.first->second); 
    //     }
    // }

    for (const auto& w : word_count)  // for each element in the map
        cout << w.first << " occurs " << w.second
             << ((w.second > 1) ? " times" : " time") << endl;

    return 0;
}
