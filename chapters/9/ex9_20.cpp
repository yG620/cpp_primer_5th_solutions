//
//  ex9_20.cpp
//  Exercise 9.20
//
//  Created by yG620 on 20/8/28
//
//  @Brief
//  编写程序，从一个`list<int>`拷贝元素到两个`deque`中。值为偶数的所有元素都拷贝到一个`deque`中，而奇数值元素都拷贝到另一个`deque`中。
//  @KeyPoint   1. 先将 list 范围赋值给 vector，再进行比较

#include <deque>
#include <fstream>
#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char const *argv[]) {
    list<int> li = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    deque<int> oddDeque, evenDeque;

    // method 1
    for (auto elem : li) {
        if (elem % 2 != 0)
            oddDeque.push_back(elem);
        else
            evenDeque.push_back(elem);
    }

    // method 2
    for (auto elem : li) (elem & 0x01 ? oddDeque : evenDeque).push_back(elem);

    // print results
    for (auto elem : oddDeque) {
        cout << elem << " ";
    }
    cout << endl;

    for (auto elem : evenDeque) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
