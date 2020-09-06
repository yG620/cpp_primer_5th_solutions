//
//  ex10_11.cpp
//  Exercise 10.11
//
//  Created by yG620 on 20/9/6
//
//  @Brief      >
//  @KeyPoint   1. stable_sort() 第三个参数虽然是函数，当调用不同于往常。
//  @KeyPoint   2. 注意 isShorter 的形参。

#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

template <typename Sequence>
void print(Sequence const& seq) {
    for (const auto& element : seq) cout << element << " ";
    cout << endl;
}

void elimDups(vector<string>& svec) {
    sort(svec.begin(), svec.end());
    auto unique_end = unique(svec.begin(), svec.end());
    svec.erase(unique_end, svec.end());
}

bool isShorter(const string &s1, const string &s2) {
    return s1.size() < s2.size();
}

int main(int argc, char const* argv[]) {
    vector<string> svec = {"the",  "quick", "red",  "fox", "jumps", "over", "the", "slow", "red", "turtle"};

    elimDups(svec);
    stable_sort(svec.begin(), svec.end(), isShorter);
    print(svec);

    return 0;
}
