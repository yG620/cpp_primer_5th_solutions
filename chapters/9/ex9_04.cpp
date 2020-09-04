//
//  ex9_04.cpp
//  Exercise 9.04
//
//  Created by yG620 on 20/8/23
//

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool find_val(vector<int>::iterator begin, vector<int>::iterator end,
              int value) {
    for (; begin != end; ++begin) {
        if (*begin == value) return true;
    }
    return false;
}

int main(int argc, char const *argv[]) {
    vector<int> ivec = {0, 1, 2, 3, 4, 6, 7, 8, 9};
    int val = 5;

    vector<int>::iterator left = ivec.begin();
    vector<int>::iterator right = ivec.end();

    if (find_val(left, right, val))
        cout << "This string has " << val << endl;
    else
        cout << "This string has not " << val << endl;

    return 0;
}

/*
 *  问题 1：为什么 27 行的 left 不需要 &
 *
 */