//
//  ex10_18.cpp
//  Exercise 10.18
//
//  Created by yG620 on 20/9/7
//
//  @Brief      > Rewrite biggies to use partition instead of find_if.
// We described the partition algorithm in exercise 10.13 in § 10.3.1 (p.387).
// 
//  @KeyPoint   1. auto count = words.end() - wc;

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void ElemDups(vector<string>& svec) {
    sort(svec.begin(), svec.end());
    auto unique_end = unique(svec.begin(), svec.end());
    svec.erase(unique_end, svec.end());
}

template <typename Sequence> 
void PrintSequence(Sequence const& seq) {
    for (const auto& element : seq)
        cout << element << " ";
    cout << endl;
}

void Biggies(vector<string> &words, vector<string>::size_type sz) {
    ElemDups(words);
    PrintSequence(words);
    auto wc = partition(words.begin(), words.end(), [sz] (string & word) 
                                                    { return word.size() < sz; });
    cout << "Modied: ";
    for_each(wc, words.end(),[](const string &word){cout << word << " ";});
    cout << endl;
}

int main(int argc, char const* argv[]) {
    vector<string> svec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    cout << "Raw:    ";
    PrintSequence(svec);

    Biggies(svec, 4);
    cout << endl;

    return 0;
}
