//
//  ex11_14.cpp
//  Exercise 11.14
//
//  Created by yG620 on 20/9/14
//
//  @Brief      > Extend the map of children to their family name that you
// wrote for the exercises in § 11.2.1 (p. 424) by having the vector store a
// pair that holds a child’s name and birthday.
//  @KeyPoint   1. 


#include <algorithm>
#include <cctype>
#include <iostream>
#include <map>
#include <string>

using namespace std;
using Families = map<string, vector<pair<string, string>> >;

void print(Families const& families) {
    for (auto const& family : families) {
        cout << "last name: "<< family.first << "\n";
        for (auto const& child : family.second) {
            cout << "child's name: " << child.first << ",  birthday: " << child.second;
            cout << "\n";
        }
        cout << "\n";
    }
}

void addChild(Families &families, const string &family, const string &childname, 
                                                        const string &birthday) {
    families[family].emplace_back(childname, birthday);
}

void addFamily(Families &families, const string &family) {
    families[family];
}

int main() {
    Families families;
    string child, birthday;

    addFamily(families, "YI");
    addChild(families, "YI", "cs", "1997-05-14");
    addChild(families, "YI", "t", "2006-09-04");
    addFamily(families, "GUO");
    addChild(families, "GUO", "tx", "1997-06-20");
    addChild(families, "GUO", "xj", "2002-04-16");
    
    cout << "Families info: " << endl;
    print(families);
    return 0;
}
