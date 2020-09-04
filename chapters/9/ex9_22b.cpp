//
//  ex9_22b.cpp
//  Exercise 9.22b
//
//  Created by yG620 on 20/8/30
//
//  @Brief      其他思路：程序本意是检查 iv 原来的前一半元素，故循环次数是已知的。
//  @Brief               这要比比较 “当前” 迭代器和 “中央迭代器” 的方式简单一些。
//  @KeyPoint   

#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    vector<int> iv = {1, 1, 1, 3, 1};
    int some_val = 1;

    vector<int>::iterator iter = iv.begin();
    int org_size = iv.size(), cnt = 0;

    while (cnt <= org_size / 2) {
        if (*iter == some_val) {
            iter = iv.insert(iter, 2 * some_val);
            iter++;
            iter++;
        } else {
            iter++;
        }
        cnt++;
    }

    for (iter = iv.begin(); iter != iv.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}
