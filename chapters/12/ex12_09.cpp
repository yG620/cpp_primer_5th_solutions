//
// ex12_09.cpp
// Exercise 12.09
//
// Created by yG620 on 20/9/23
//
// @Brief    >    Explain what happens in the following code:
// int *q = new int(42), *r = new int(100);
// r = q;
// auto  q2  =  make_shared<int>(42),  r2  =
// make_shared<int>(100);
// r2 = q2;
//
// @KeyPoint >  ordinary pointer has two issues: 
// @KeyPoint >  1. r points memory will become a orphan memory.
// @KeyPoint >  2. dangling pointers. 
// @KeyPoint >  3. smart pointers can solve the two issues.

#include <iostream>
#include <memory>
#include <vector>

using namespace std;
 
int main() {
    int *q = new int(42), *r = new int(100);
    r = q;
    cout << r << endl;
    cout << *r << endl;
    cout << q << endl;
    cout << *q << endl;

    shared_ptr<int> q2 = make_shared<int>(42), r2 = make_shared<int>(100);
    r2 = q2;
    cout << r2 << endl;
    cout << *r2 << endl;
    cout << q2 << endl;
    cout << *q2 << endl;

    return 0;
}
