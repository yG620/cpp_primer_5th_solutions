//
//  ex9_16.cpp
//  Exercise 9.16
//
//  Created by yG620 on 20/8/26
//
//  @Brief      重写上一题的程序，比较一个 list<int> 中的元素和一个 vector<int>
//  中的元素。
//  @KeyPoint   1. 先将 list 范围赋值给 vector，再进行比较

#include <fstream>
#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    std::list<int> li{1, 2, 3, 4, 5};
    std::vector<int> vec2{1, 2, 3, 4, 5};
    std::vector<int> vec3{1, 2, 3, 4};

    cout << ((vector<int>(li.begin(), li.end())) == vec2 ? "true" : "false") << endl;
    cout << ((vector<int>(li.begin(), li.end())) == vec3 ? "true" : "false") << endl;

    return 0;
}
