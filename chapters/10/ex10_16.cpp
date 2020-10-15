//
//  ex10_16.cpp
//  Exercise 10.16
//
//  Created by yG620 on 20/9/6
//
//  @Brief      > Write your own version of the biggies function using lambdas.
//
//  @KeyPoint   1. auto count = words.end() - wc;

#include <algorithm>
#include <iostream>
#include <vector>

#include "../6/ex6_42.h"

using namespace std;

void elemDups(vector<string>& svec) {
    sort(svec.begin(), svec.end());
    auto unique_end = unique(svec.begin(), svec.end());
    svec.erase(unique_end, svec.end());
}

template <typename Sequence>
void printSequence(Sequence const& seq) {
    for (const auto& element : seq) cout << element << " ";
    cout << endl;
}

void biggies(vector<string>& words, vector<string>::size_type sz) {
    elemDups(words);
    stable_sort(words.begin(), words.end(),
                [](const string& lhs, const string& rhs) {
                    return lhs.size() < rhs.size();
                });

    auto wc = find_if(words.begin(), words.end(),
                      [sz](const string& word) { return word.size() >= sz; });

    auto count = words.end() - wc;
    cout << count << " " << make_plural(count, "word", "s") << endl;

    for_each(wc, words.end(), [](const string& word) { cout << word << " "; });
    cout << endl;
}

int main(int argc, char const* argv[]) {
    vector<string> svec{"respect", "respect", "respect", "hi~", "cp", "alan"};
    printSequence(svec);

    biggies(svec, 4);
    cout << endl;

    return 0;
}
