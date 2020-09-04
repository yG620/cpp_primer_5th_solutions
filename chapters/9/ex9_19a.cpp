//
//  ex9_19a.cpp
//  Exercise 9.19
//
//  Created by yG620 on 20/8/27
//
//  @Brief
//  编写程序，从标准输入读取`string`序列，存入一个`deque`中。编写一个循环，用迭代器打印`deque`中的元素。
//  @KeyPoint   1. 先将 list 范围赋值给 vector，再进行比较

#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    list<int> li;
    int s;
    while (cin >> s) {
        li.push_back(s);
    }
    for (auto &elem : li) {
        elem *= 2 ;
        cout << elem << endl;
    }

    // for (auto elem = li.begin(); elem != li.end(); ++elem) {
    //     cout << *elem << endl;
    // }
    return 0;
}
