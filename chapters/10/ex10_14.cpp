//
//  ex10_14.cpp
//  Exercise 10.14
//
//  Created by yG620 on 20/9/6
//
//  @Brief      > Write a lambda that takes two ints and returns their sum.
//  @KeyPoint   1. A lambda expression has the form:
//  [capture list] (parameter list) -> return type { function body }

#include <algorithm>
#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {
    auto SumFun = [](int a, int b) { return a + b; };
    cout << "The sum is " << SumFun(1, 5) << endl;

    return 0;
}
