//
//  ex9_28.cpp
//  Exercise 9.28
//
//  Created by yG620 on 20/9/2
//
//  @Brief      > 编写函数，接受一个`forward_list<string>`和两个`string`共三个参数。函数应在链表中查找第一个`string`，
//  @Brief        并将第二个`string`插入到紧接着第一个`string`之后的位置。若第一个`string`未在链表中，则将第二个`string`插入到链表末尾。
//  @KeyPoint   1. to_find & to_add 的命名
//  @KeyPoint   2. 当 fwls 中只有一个 first_str 时，可使用 return 语句。
//  @KeyPoint   3. 如果没有字串，需要添加到末尾。

#include <deque>
#include <forward_list>
#include <fstream>
#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;

void find_and_insert_method_yg(forward_list<string> &fwls, string first_str, string second_str) {
    auto prev = fwls.before_begin();
    auto curr = fwls.begin();
    bool isInsert = false;

    while (curr != fwls.end()) {
        if (*curr == first_str) {            
            curr = fwls.insert_after(curr, second_str);
            isInsert = true;
        }else {
            prev = curr;
        }
        ++curr;       
    }

    if(!isInsert) {
        curr = fwls.insert_after(prev, second_str);
    }
}

void find_and_insert_method_CP(forward_list<string> &list, string const& to_find, string const& to_add) {
    auto prev = list.before_begin();
    for (auto curr = list.begin(); curr != list.end(); prev = curr++) {
        if (*curr == to_find) {
            list.insert_after(curr, to_add);
            return;
        }
    }
    list.insert_after(prev, to_add);
}

int main(int argc, char const *argv[]) {
    forward_list<string> flst_one = {"aaa", "bbb", "ccc", "ddd", "bbb"};
    forward_list<string> flst_two = {"aaa", "bbb", "ccc", "ddd", "bbb"};

    // has one string
    // find_and_insert_method_yg(flst_one, "bbb", "eee");
    // find_and_insert_method_CP(flst_two, "bbb", "eee");

    // no string
    find_and_insert_method_yg(flst_one, "fff", "eee");
    find_and_insert_method_CP(flst_two, "fff", "eee");

    for (auto elem : flst_one) {
        cout << elem << " ";
    }
    cout << endl;

    for (auto elem : flst_two) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
