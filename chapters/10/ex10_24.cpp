//
//  ex10_22.cpp
//  Exercise 10.22
//
//  Created by yG620 on 20/9/9
//
//  @Brief      >  Rewrite the program to count words of size 6 or less using
// functions in place of the lambdas.

//  @KeyPoint   1. The second param of bind is from find_if algorithm.

#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;
using namespace std::placeholders;

template <typename Sequence>
void printSequence(Sequence const& seq) {
    for (const auto& element : seq) cout << element << " ";
    cout << endl;
}

bool checkSize(const string& s, vector<int>::size_type sz) {
    return s.size() < sz;
}

void isBiggerThanVecNums(const vector<int>& ivec, const string& str) {
    auto value = find_if(ivec.begin(), ivec.end(), bind(checkSize, str, _1));
    if (value != ivec.end()) {
        cout << "The number is: " << *value << endl;
    } else {
        cout << "Not found!" << endl;
    }
}

int main(int argc, char const* argv[]) {
    vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    cout << "Nums:               ";
    printSequence(nums);

    string str;
    cout << "Please input a word: ";
    cin >> str;

    isBiggerThanVecNums(nums, str);

    return 0;
}
