//
//  ex10_09.cpp
//  Exercise 10.9
//
//  Created by yG620 on 20/9/6
//
//  @Brief      > Implement your own version of elimDups. Test your
// program by printing the vector after you read the input, after the call to
// unique, and after the call to erase.
// 
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
    print(svec);
    auto unique_end = unique(svec.begin(), svec.end());
    print(svec);
    svec.erase(unique_end, svec.end());
}

int main(int argc, char const* argv[]) {
    vector<string> svec = {"the",  "quick", "red",  "fox", "jumps", "over", "the",   "slow", "red", "turtle"};

    print(svec);
    elimDups(svec);
    print(svec);

    return 0;
}
