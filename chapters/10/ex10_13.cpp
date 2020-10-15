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

//  @KeyPoint   1. 

#include <algorithm>
#include <fstream>
#include <iostream>
#include <list>
#include <vector>

using namespace std;

inline void print(vector<string>::iterator begin, vector<string>::iterator end) {
    for (auto iter = begin; iter != end; ++iter) cout << *iter << " ";
    cout << endl;
}

inline bool isFiveOrMore(const string& s) {
    return s.size() >= 5 ? true : false;
}

int main(int argc, char const* argv[]) {
    vector<string> strvec = {"12378", "5678", "789", "123456"};
    print(strvec.begin(), strvec.end());

    auto iter = partition(strvec.begin(), strvec.end(), isFiveOrMore);
    print(strvec.begin(), iter);

    return 0;
}
