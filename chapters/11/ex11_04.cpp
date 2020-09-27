//
//  ex11_04.cpp
//  Exercise 11.04
//
//  Created by yG620 on 20/9/13
//
//  @Brief      > Extend your program to ignore case and punctuation. For
// example, “example.” “example,” and “Example” should all increment the same
// counter.
//
//  @KeyPoint   1. fix bug: couldn't deduce template parameter ‘_Predicate’
//  word.erase(remove_if(word.begin(), word.end(), ispunct), --> ::ispunct
//  see https://stackoverflow.com/questions/8364678/g-string-remove-if-error
//
//              2. remove punct:
//  while (cin >> word) {
//     transform(word.begin(), word.end(), word.begin(), [](char ch) {
//         if (ispunct(ch)) return ' ';
//         return ch;
//     });
// }

#include <algorithm>
#include <cctype>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, int> word_count;
    string word;

    while (cin >> word) {
        // tolower: method 1
        for (auto& ch : word) ch = tolower(ch);

        // tolower: method 2
        // transform(word.begin(), word.end(), word.begin(), ::tolower);

        // remove punct
        word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
        ++word_count[word];
    }
    for (const auto& word : word_count)
        cout << word.first << " : " << word.second << "\n";

    return 0;
}
