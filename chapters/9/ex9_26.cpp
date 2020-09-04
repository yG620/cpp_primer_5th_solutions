//
//  ex9_26.cpp
//  Exercise 9.26
//
//  Created by yG620 on 20/8/31
//
//  @Brief     
//  @KeyPoint   1.当从 vector 中删除元素时，会导致删除点之后位置的迭代器、引用和指针失效。
//  @KeyPoint   2.erase 返回的迭代器指向删除元素之后的位置。因此，将 erase 返回的迭代器赋予 ivec_begin, 使其能正确向前推进。
//  @KeyPoint   3.尾后位置每个循环步都用 end 重新获得，保证其有效。
//  @KeyPoint   4.对于 list，删除操作并不会令迭代器失效，但上述方法依然有效。

#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};

    vector<int> ivec;
    list<int> ilist;

    for (int i = 0; i < 11; i++) ivec.push_back(ia[i]);
    ilist.insert(ilist.begin(), ivec.begin(), ivec.end());

    // ivec.assign(ia, ia + 11);
    // ilist.assign(ia, ia + 11);

    auto ivec_begin = ivec.begin();
    auto ilist_begin = ilist.begin();

    while (ivec_begin != ivec.end()) {
        if (!(*ivec_begin % 2))
            ivec_begin = ivec.erase(ivec_begin);
        else
            ++ivec_begin;
    }

    while (ilist_begin != ilist.end()) {  // 为什么不能用 ilist.empty()?
        if (*ilist_begin % 2)
            ilist_begin = ilist.erase(ilist_begin);
        else
            ++ilist_begin;
    }

    for (auto i : ivec) cout << i << " ";
    cout << endl;

    for (auto i : ilist) cout << i << " ";
    cout << endl;

    return 0;
}
