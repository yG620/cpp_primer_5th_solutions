//
//  ex10_01.cpp
//  Exercise 10.1
//
//  Created by yG620 on 20/9/4
//
//  @Brief      > The algorithm header defines a function named count
// that, like find, takes a pair of iterators and a value. count returns a count
// of how often that value appears. Read a sequence of ints into a vector
// and print the count of how many elements have a given value.
//
//  @KeyPoint   

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
    vector<int> ivec = {0, 1, 2, 3, 4, 5, 1, 7, 8, 1};

    auto result = count(ivec.begin(), ivec.end(), 1);
    cout << result << endl;
    
    return 0;
}
