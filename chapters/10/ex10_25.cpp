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

using namespace std;
using namespace std::placeholders;

void ElemDups(vector<string>& svec) {
    sort(svec.begin(), svec.end());
    auto unique_end = unique(svec.begin(), svec.end());
    svec.erase(unique_end, svec.end());
}

template <typename Sequence>
void PrintSequence(Sequence const& seq) {
    for (const auto& element : seq) cout << element << " ";
    cout << endl;
}

bool CheckSize(const string& s, vector<int>::size_type sz) {
    return s.size() < sz;
}

void Biggies(vector<string>& words, vector<string>::size_type sz) {
    ElemDups(words);
    auto wc = partition(words.begin(), words.end(), bind(CheckSize, _1, sz));
    cout << "Modied: ";
    for_each(wc, words.end(), [](const string& word) { cout << word << " "; });
    cout << endl;
}

int main(int argc, char const* argv[]) {
    vector<string> svec = {"the",  "quick", "red",  "fox", "jumps",
                           "over", "the",   "slow", "red", "turtle"};
    cout << "Raw:    ";
    PrintSequence(svec);

    Biggies(svec, 4);
    cout << endl;

    return 0;
}
