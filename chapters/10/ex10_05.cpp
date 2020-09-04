//
//  ex10_04.cpp
//  Exercise 10.4
//
//  Created by yG620 on 20/9/4
//
//  @Brief      > 删除偶数元素，复制每个奇数元素
//  @KeyPoint   1.注意二者的些微差别

#include <vector>
#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>
#include <typeinfo>

using namespace std;

int main(int argc, char const *argv[]) {
    vector<string> roster1 = {"123", "456", "789"};
    list<const char*> roster2 = {"123", "741", "789", "001"};
    
    auto result = equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());
    cout << typeid(result).name() << endl;
    cout << result << endl;

    return 0;
}
