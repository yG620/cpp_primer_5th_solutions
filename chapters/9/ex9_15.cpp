//
//  ex9_15.cpp
//  Exercise 9.15
//
//  Created by yG620 on 20/8/26
//
//  @Brief      编写程序，判定两个`vector<int>`是否相等。
//  @KeyPoint   1. 三目运算符的使用
//              2. 同一类型（vector）之间的大小比较

#include <fstream>
#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    std::vector<int> vec1{1, 2, 3, 4, 5};
    std::vector<int> vec2{1, 2, 3, 4, 5};
    std::vector<int> vec3{1, 2, 3, 4};

    cout << (vec1 == vec2 ? "true" : "false") << endl;
    cout << (vec1 == vec3 ? "true" : "false") << endl;

    return 0;
}
