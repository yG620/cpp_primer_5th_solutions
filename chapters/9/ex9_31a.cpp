//
//  ex9_31a.cpp
//  Exercise 9.31a
//
//  Created by yG620 on 20/9/3
//
//  @Brief      > 删除偶数元素，复制每个奇数元素
//  @KeyPoint   1. vector: iter += 2; --> list: advance(iter, 2);
//  @KeyPoint   2. advance(it, n); it 表示某个迭代器，n 为整数。该函数的功能是将 it 迭代器前进或后退 n 个位置。
//  @KeyPoint   3. 使用 advance 需包含的头文件，#include <iterator>, using namespace std;


#include <vector>
#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main(int argc, char const *argv[]) {
    list<int> list = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto iter = list.begin();

    while (iter != list.end()) { 
        if ( *iter & 1 ) {
            iter = list.insert(iter, *iter);
            advance(iter, 2);
        }else {
            iter = list.erase(iter);
        }        
    }
    
    for (auto elem : list) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
