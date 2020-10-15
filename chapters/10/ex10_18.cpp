//
//  ex10_18.cpp
//  Exercise 10.18
//
//  Created by yG620 on 20/9/7
//
//  @Brief      > Rewrite biggies to use partition instead of find_if.
// We described the partition algorithm in exercise 10.13 in § 10.3.1 (p.387).
//
//  @KeyPoint   1. stable_sort is not required before partition.
//  @KeyPoint   2. The count statement and print statement need to be modified.

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
    cout << "Dups   : ";
    printSequence(words);
    auto wc = partition(words.begin(), words.end(),
                        [sz](string& word) { return word.size() >= sz; });
    
    auto count = wc - words.begin();
    cout << count << " " << make_plural(count, "word", "s") << " of length longer than " << sz << endl;

    cout << "Modied : ";
    for_each(words.begin(), wc, [](const string& word) { cout << word << " "; });
    cout << endl;
}

int main(int argc, char const* argv[]) {
    vector<string> svec = {"the",  "quick", "red",  "fox", "jumps",
                           "over", "the",   "slow", "red", "turtle"};
    cout << "Raw    : ";
    printSequence(svec);

    biggies(svec, 6);
    cout << endl;

    return 0;
}