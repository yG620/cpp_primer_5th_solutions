//
//  ex9_22.cpp
//  Exercise 9.22
//
//  Created by yG620 on 20/8/28
//
//  @Brief      > 假定`iv`是一个`int`的`vector`，下面的程序存在什么错误？你将如何修改？
//  @KeyPoint   出题思路：1. 理解容器插入操作的副作用————向一个 vector、string或deque 插入元素会使现有指向容器的迭代器、引用和指针失效。
//  @KeyPoint             2. 练习如何利用 insert 返回的迭代器，使得在向容器插入元素后，仍能正确在容器中进行遍历。

#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    vector<int> iv = {1, 1, 3, 1};
    int some_val = 1;
    vector<int>::iterator iter = iv.begin(), mid = iv.begin() + iv.size() / 2;
    
    while (iter != mid)
        if (*iter == some_val) iv.insert(iter, 2 * some_val);

    for (iter = iv.begin(); iter != iv.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}
