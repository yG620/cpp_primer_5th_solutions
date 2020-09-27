//
// ex12_19.cpp
// Exercise 12.19
//
// Created by yG620 on 20/9/27
//
// @Brief    >     Define your own version of StrBlobPtr and update your
// StrBlob class with the appropriate friend declaration and begin and end
// members.
//
// @KeyPoint >  1.

#include <iostream>
#include <memory>
#include <vector>

#include "ex12_19.h"

using namespace std;
 
int main() {
    StrBlob sb = { "a", "an", "the"};
    sb.push_back("about");
    cout << sb.front() << " " << sb.back() << endl;

    for (auto ptr = sb.begin(); neq(ptr, sb.end()); ptr.incr()) 
        cout << ptr.deref() << " ";
    cout << endl;
    
    return 0;
}
