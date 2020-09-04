//
//  ex10_03.cpp
//  Exercise 10.3
//
//  Created by yG620 on 20/9/4
//
//  @Brief      > 删除偶数元素，复制每个奇数元素
//  @KeyPoint   1. auto sresult = accumulate(slist.begin(), slist.end(), "");
//  @KeyPoint      error: cannot convert ‘std::__cxx11::basic_string<char>’ to ‘const char*’ in assignment

#include <vector>
#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
    vector<int> ivec = {0, 1, 2, 3, 4};

    auto iresult = accumulate(ivec.begin(), ivec.end(), 1);
    cout << iresult << endl;

    list<string> slist = {"adf", "123", "456", "478", "123"};

    auto sresult = accumulate(slist.begin(), slist.end(), string(""));
    cout << sresult << endl;
    
    return 0;
}
