//
//  ex10_02.cpp
//  Exercise 10.2
//
//  Created by yG620 on 20/9/4
//
//  @Brief      > Repeat the previous program, but read values into a list of
// strings.
//
//  @KeyPoint    

#include <vector>
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
    list<string> slist = {"adf", "123", "456", "478", "123"};

    auto result = count(slist.begin(), slist.end(), "123");
    cout << result << endl;
    
    return 0;
}
