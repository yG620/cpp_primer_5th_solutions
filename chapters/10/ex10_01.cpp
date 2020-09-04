//
//  ex10_01.cpp
//  Exercise 10.1
//
//  Created by yG620 on 20/9/4
//
//  @Brief      > 删除偶数元素，复制每个奇数元素
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
