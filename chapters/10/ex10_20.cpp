//
//  ex10_20.cpp
//  Exercise 10.20
//
//  Created by yG620 on 20/9/7
//
//  @Brief      > The library defines an algorithm named count_if. Like
// find_if, this function takes a pair of iterators denoting an input range and
// a predicate that it applies to each element in the given range. count_if
// returns a count of how often the predicate is true. Use count_if to rewrite
// the portion of our program that counted how many words are greater than
// length 6.

//  @KeyPoint   

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

template <typename Sequence> 
void PrintSequence(Sequence const& seq) {
    for (const auto& element : seq)
        cout << element << " ";
    cout << endl;
}

size_t biggerThan6(vector<string> &words, vector<string>::size_type sz) {
    return count_if(words.begin(), words.end(), [sz] (string & word) 
                                                    { return word.size() >= sz; });                                                  
}

int main(int argc, char const* argv[]) {
    vector<string> svec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    
    cout << "Raw: ";
    PrintSequence(svec);

    cout << "The word(s)'s count is bigger than 6: ";
    cout << biggerThan6(svec, 6) << endl;

    return 0;
}
