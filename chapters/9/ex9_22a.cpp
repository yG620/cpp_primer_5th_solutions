//
//  ex9_22.cpp
//  Exercise 9.22
//
//  Created by yG620 on 20/8/28
//
//  @Brief      思路：通过比较 “当前” 迭代器和 “中央迭代器” 的方式，对程序进行修改
//  @KeyPoint   1. insert() 将 y 插入到 iter 原来指向的元素 x 之前的位置。因此，需要两次 iter++ 才能将 iter 推进到 x 之后的位置。
//  @KeyPoint   2. insert() 会使得 mid 失效，故需要实时更新 mid.


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

    vector<int>::iterator iter = iv.begin();
    int org_size = iv.size(), new_ele = 0;

    while (iter != (iv.begin() + org_size / 2 + new_ele)) {
        if (*iter == some_val) {
            iter = iv.insert(iter, 2 * some_val);
            new_ele++;
            iter++;
            iter++;
        } else {
            iter++;
        }
    }

    for (iter = iv.begin(); iter != iv.end(); iter++) {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}
