//
//  ex9_27.cpp
//  Exercise 9.27
//
//  Created by yG620 on 20/9/1
//
//  @Brief      > 编写程序，查找并删除`forward_list<int>`中的奇数元素。 
//  @KeyPoint   1. 不慌不忙，一个一个分析，对照书本查成员函数，不用死记

#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <forward_list>
using namespace std;

int main(int argc, char const *argv[]) {
    forward_list<int> iflist = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

    auto pre = iflist.before_begin();
    auto curr = iflist.begin();
    auto tail = iflist.end();

    while (curr != tail) {        
        if (*curr & 1) {
            ++curr;
            iflist.erase_after(pre);           
        }else {
            pre = curr;
            ++curr;
        }
    }

    for (auto elem : iflist)
        cout << elem << " ";
    cout << endl;

    return 0;
}
