//
//  ex10_09.cpp
//  Exercise 10.9
//
//  Created by yG620 on 20/9/6
//
//  @Brief      >
//  @KeyPoint

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

int main(int argc, char const* argv[]) {
    vector<string> svec = {"the",  "quick", "red",  "fox", "jumps", "over", "the",   "slow", "red", "turtle"};

    elimDups(svec);
    print(svec);

    return 0;
}
