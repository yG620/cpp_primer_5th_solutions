//
//  ex9_05.cpp
//  Exercise 9.05
//
//  Created by yG620 on 20/8/23
//
//  @Brief      返回一个迭代器指向找到的元素 --> 返回元素的下标
//  @KeyPoint   1. find_val 函数然后返回迭代器，如何处理未找到值的情况
//              2. 如何确定元素下标

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int>::iterator find_val(vector<int>::iterator begin,
                               vector<int>::iterator end, int value) {
    for (; begin != end; ++begin) {
        if (*begin == value) return begin;
    }
    return end;
}

int main(int argc, char const *argv[]) {
    vector<int> ivec = {3, 4, 6, 7, 8};

    vector<int>::iterator left = ivec.begin();
    vector<int>::iterator right = ivec.end();
    vector<int>::iterator value;

    value = find_val(left, right, 4);
    cout << value - ivec.begin() << endl;

    value = find_val(left, right, 5);
    cout << value - ivec.begin() << endl;

    return 0;
}
