//
//  ex9_31a.cpp
//  Exercise 9.31a
//
//  Created by yG620 on 20/9/3
//
//  @Brief      > 删除偶数元素，复制每个奇数元素
//  @KeyPoint   1. 为偶数时，不急着去操作 prev

#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;

int main(int argc, char const *argv[]) {
    forward_list<int> fwlsi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    auto iter = fwlsi.begin();
    auto prev = fwlsi.before_begin();

    while (iter != fwlsi.end()) { 
        if ( *iter & 1 ) {            
            iter = fwlsi.insert_after(iter, *iter);
            prev = iter;
            ++iter;
        }else {
            iter = fwlsi.erase_after(prev);           
        }               
    }
    
    for (auto elem : fwlsi) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
