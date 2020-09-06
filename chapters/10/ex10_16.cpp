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
    stable_sort(words.begin(), words.end(), [](const string &lhs, const string &rhs)
                                            {return lhs.size() < rhs.size();});

    auto wc = find_if(words.begin(), words.end(), [sz] (string & word) 
                                                    { return word.size() >= sz; });
    cout << "Modied: ";
    for_each(wc, words.end(),[](const string &word){cout << word << " ";});
    cout << endl;
}

int main(int argc, char const* argv[]) {
    vector<string> svec{"1234", "1234", "1234", "hi~", "alan", "alan", "cp"};
    cout << "Raw: ";
    PrintSequence(svec);

    Biggies(svec, 3);
    cout << endl;

    return 0;
}
