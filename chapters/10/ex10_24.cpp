//
//  ex10_22.cpp
//  Exercise 10.22
//
//  Created by yG620 on 20/9/9
//
//  @Brief      >  Rewrite the program to count words of size 6 or less using
// functions in place of the lambdas.

//  @KeyPoint   1. find_if 

#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;
using namespace std::placeholders;

template <typename Sequence>
void PrintSequence(Sequence const& seq) {
    for (const auto& element : seq) cout << element << " ";
    cout << endl;
}

bool CheckSize(const string& s, vector<int>::size_type sz) {
    return s.size() < sz;
}

void IsBiggerThanVecNums(const vector<int>& ivec, const string& str) {
    auto value = find_if(ivec.begin(), ivec.end(), bind(CheckSize, str, _1));
    if (value != ivec.end()) {
        cout << "The number is: " << *value << endl;
    } else {
        cout << "Not found!" << endl;
    }
}

int main(int argc, char const* argv[]) {
    vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Nums:               ";
    PrintSequence(nums);

    string str;
    cout << "Please input words: ";
    cin >> str;

    IsBiggerThanVecNums(nums, str);

    return 0;
}
