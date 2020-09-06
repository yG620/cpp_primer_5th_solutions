//
//  ex10_06.cpp
//  Exercise 10.6
//
//  Created by yG620 on 20/9/5
//
//  @Brief      >
//  @KeyPoint   1. fill_n 会自增

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8};

    for (auto &element : ivec) {
        fill_n(ivec.begin(), ivec.size(), 0);
    }

    for (auto &element : ivec) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
