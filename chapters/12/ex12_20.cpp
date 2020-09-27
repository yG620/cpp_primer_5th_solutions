//
// ex12_20.cpp
// Exercise 12.20
//
// Created by yG620 on 20/9/27
//
// @Brief    >     Define your own version of StrBlobPtr and update your
// StrBlob class with the appropriate friend declaration and begin and end
// members.
//
// @question >  1. why not use vector<StrBlob> ?


#include <iostream>
#include <memory>
#include <vector>
#include <fstream>

#include "ex12_19.h"

using namespace std;
 
int main(int argc, char const *argv[]) {
    ifstream ifs(argv[1]);
    if (!ifs) {
        cout << "Failed to open input file! " << endl;
        exit(1);
    }

    StrBlob sb;
    string s;
    
    while(getline(ifs, s))
        sb.push_back(s);
        
    for (auto ptr = sb.begin(); neq(ptr, sb.end()); ptr.incr()) 
        cout << ptr.deref() << " ";
    cout << endl;
    
    return 0;
}
