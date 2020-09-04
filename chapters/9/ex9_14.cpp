//
//  ex9_14.cpp
//  Exercise 9.14
//
//  Created by yG620 on 20/8/25
//
//  @Brief      编写程序，将一个`list`中的`char
//  *`指针元素赋值给一个`vector`中的`string`。
//  @KeyPoint   1. find_val 函数然后返回迭代器，如何处理未找到值的情况
//              2. 如何确定元素下标

#include <fstream>
#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    list<char *> slist = {"hello", "Gtx"};
    vector<string> svec;

    // svec = slist;
    svec.assign(slist.begin(), slist.end());

    for (auto element : svec) cout << element << endl;

    return 0;
}
