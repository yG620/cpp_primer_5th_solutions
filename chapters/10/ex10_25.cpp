//
//  ex10_25.cpp
//  Exercise 10.25
//
//  Created by yG620 on 20/9/10
//
//  @Brief      > In the exercises for § 10.3.2 (p. 392) (10.18.cpp) you wrote a version
// of biggies that uses partition. Rewrite that function to use check_size and bind.
//
//  @KeyPoint   1. auto count = words.end() - wc;

#include <algorithm>
#include <iostream>
#include <vector>
#include <functional>

#include "../6/ex6_42.h"

using namespace std;
using namespace std::placeholders;

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

bool checkSize(const string& s, vector<int>::size_type sz) {
    return s.size() < sz;
}

void biggies(vector<string>& words, vector<string>::size_type sz) {
    elemDups(words);
    auto wc = partition(words.begin(), words.end(), bind(checkSize, _1, sz));
    auto count = words.end() - wc;
    cout << count << " " << make_plural(count, "word", "s") << " of length longer than " << sz << endl;

    cout << "Modied: ";
    for_each(wc, words.end(), [](const string& word) { cout << word << " "; });
    cout << endl;
}

int main(int argc, char const* argv[]) {
    vector<string> svec = {"the",  "quick", "red",  "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    
    cout << "Raw:    ";
    printSequence(svec);

    biggies(svec, 4);
    cout << endl;

    return 0;
}
