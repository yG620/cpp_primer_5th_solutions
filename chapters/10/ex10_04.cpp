//
//  ex10_04.cpp
//  Exercise 10.4
//
//  Created by yG620 on 20/9/4
//
//  @Brief      > Assuming v is a vector<double>, what, if anything, is
// wrong with calling accumulate(v.cbegin(), v.cend(), 0)?
//
//  @attention  1. The third accumulate parameter is the initial value of accumulate. 
// It also determines the return type of the function and what addition operator is used in the function
//
// The reason is std::accumulate is a template function. The third parameter is _Tp __init
// When "0" , an integer, had been specified here, the compiler deduced _Tp as
// interger.As a result , when the following statments were being excuted :
//  for (; __first != __last; ++__first)
//	__init = __init + *__first;
//  return __init;
// all calculation would be converted to integer.


#include <vector>
#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
    vector<double> dvec = {0.0, 1.5, 2.0, 3.0, 4.0};

    auto dresult = accumulate(dvec.cbegin(), dvec.cend(), 0);
    cout << dresult << endl;

    auto dresult1 = accumulate(dvec.cbegin(), dvec.cend(), 0.0);
    cout << dresult1 << endl;

    return 0;
}
