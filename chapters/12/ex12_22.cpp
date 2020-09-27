//
// ex12_22.cpp
// Exercise 12.22
//
// Created by yG620 on 20/9/27
//
// @Brief    >  What changes would need to be made to StrBlobPtr to
// create a class that can be used with a const StrBlob? Define a class
// named ConstStrBlobPtr that can point to a const StrBlob.
//
// @KeyPoint >  1. create a constructor: [const StrBlob &]
// @KeyPoint >  2. define [const begin and const end] function

#include <iostream>
#include <memory>
#include <vector>
#include <fstream>

#include "ex12_22.h"

using namespace std;
 
int main(int argc, char const *argv[]) {
    const StrBlob sb = { "a", "an", "the"};
    
    for (auto ptr = sb.begin(); neq(ptr, sb.end()); ptr.incr()) 
        cout << ptr.deref() << " ";
    cout << endl;
    
    return 0;
}
