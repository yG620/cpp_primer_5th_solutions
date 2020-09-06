//
//  ex10_15.cpp
//  Exercise 10.15
//
//  Created by yG620 on 20/9/6
//
//  @Brief      > Write a lambda that captures an int from its enclosing
// function and takes an int parameter. The lambda should return the sum of
// the captured int and the int parameter.
//
//  @KeyPoint   1. A lambda may use a variable local to its surrounding function only if the
// lambda captures that variable in its capture list.

#include <algorithm>
#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {
    int i = 5;

    auto add = [i](int num) { return i + num; };

    cout << "The sum is " << add(1) << endl;

    return 0;
}
