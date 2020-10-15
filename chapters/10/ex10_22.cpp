//
//  ex10_22.cpp
//  Exercise 10.22
//
//  Created by yG620 on 20/9/9
//
//  @Brief      >  Rewrite the program to count words of size 6 or less using
// functions in place of the lambdas.

//  @KeyPoint   1. note: ref(os)

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

ostream& print(ostream& os, const string& word, char c) {
    return os << word << c;
}

void bindReferPara(ostream& os, vector<string>& words, char c) {
    cout << "Method 1: ";
    for_each(words.begin(), words.end(), [&os, c](const string& str) { os << str << c; });
    cout << endl;

    cout << "Method 2: ";
    // for_each(words.begin(), words.end(), bind(print, os, _1, ' ')); //
    // compile error
    for_each(words.begin(), words.end(), bind(print, ref(os), _1, ' '));
    cout << endl;
}

bool compareSize(const string& word, vector<string>::size_type sz) {
    return word.size() >= sz ? true : false;
}

size_t isLesserThanOrEqualTo6(vector<string>& words, vector<string>::size_type sz) {
    return count_if(words.begin(), words.end(), bind(compareSize, _1, sz));
}

int main(int argc, char const* argv[]) {
    vector<string> svec = {"the",  "quick", "red",  "fox", "jumps",
                           "over", "the",   "slow", "red", "turtles"};
    cout << "Raw:      ";
    printSequence(svec);

    // exersize in book
    bindReferPara(cout, svec, ' ');

    // exersize 10.22
    cout << isLesserThanOrEqualTo6(svec, 6) << endl;

    return 0;
}
