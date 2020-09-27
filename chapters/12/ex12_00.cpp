//
//  ex12_00.cpp
//  Exercise 12.00
//
//  Created by yG620 on 20/9/19
//
//  @Brief      >  print data type
//
//  @KeyPoint

#include <iostream>
#include <memory>
#include <typeinfo>

using namespace std;

int main() {
    int iobj;

    cout << typeid(iobj).name() << endl;  //  打印: int
    cout << typeid(8.16).name() << endl;  // 打印: double

    shared_ptr<int> p3 = make_shared<int>(42);
    cout << typeid(p3).name() << endl;

    return 0;
}