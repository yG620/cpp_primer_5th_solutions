//
//  ex9_31.cpp
//  Exercise 9.31
//
//  Created by yG620 on 20/9/3
//
//  @Brief      > 删除偶数元素，复制每个奇数元素
//  @KeyPoint   1. 调用 erase  后，不必递增迭代器，因为erase返回的迭代器已经指向序列中下一个元素。
//  @KeyPoint   2. 调用 insert 后，需要递增迭代器两次。记住，insert在给定位置之前插入新元素，然后返回指向新插入元素的迭代器。
//  @KeyPoint   3. 保存尾迭代器的值是一个坏主意。


#include <vector>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    vector<int> veci = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto iter = veci.begin();
    
    while (iter != veci.end()) {  
        ++iter;
        iter = veci.insert(iter, 42);
        ++iter;
    }
    
    for (auto elem : veci) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
