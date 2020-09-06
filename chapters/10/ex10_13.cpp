//
//  ex10_13.cpp
//  Exercise 10.13
//
//  Created by yG620 on 20/9/6
//
//  @Brief      > The library defines an algorithm named partition that
// takes a predicate and partitions the container so that values for which the
// predicate is true appear in the first part and those for which the predicate
// is false appear in the second part. The algorithm returns an iterator just
// past the last element for which the predicate returned true. Write a function
// that takes a string and returns a bool indicating whether the string has five
// characters or more. Use that function to partition words. Print the elements
// that have five or more characters.

//  @KeyPoint   1. return s.size() >= 5 ? true : false; --> return s.size() >= 5;

#include <algorithm>
#include <fstream>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

template <typename Sequence>
void PrintSequence(Sequence const& seq) {
    for (const auto& element : seq) cout << element << " ";
    cout << endl;
}

inline bool IsFiveOrMore(const string& s) { return s.size() >= 5 ? true : false; }

int main(int argc, char const* argv[]) {
    vector<string> strvec = {"12378", "45678", "789", "123456"};

    auto iter = partition(strvec.begin(), strvec.end(), IsFiveOrMore);

    for (auto it = strvec.begin(); it != iter; ++it){
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
