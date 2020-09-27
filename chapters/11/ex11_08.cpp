//
//  ex11_07.cpp
//  Exercise 11.07
//
//  Created by yG620 on 20/9/14
//
//  @Brief      > Define a map for which the key is the family’s last name and
// the value is a vector of the children’s names. Write code to add new
// families and to add new children to an existing family.
//
//  @KeyPoint   1. 


#include <algorithm>
#include <cctype>
#include <iostream>
#include <map>
#include <string>

using namespace std;
using Families = map<string, vector<string>>;

auto print(Families const& families) {
    for (auto const& family : families) {
        cout << family.first << ":\n";
        for (auto const& child : family.second) cout << child << " ";
        cout << "\n";
    }
}

int main() {
    Families families;
    string last_name, children;

    for (; cout << "Last name: ", cin >> last_name && last_name != "@q";) {
        for (; cout << "Children's names: ",
               cin >> children && children != "@q";) {
            families[last_name].push_back(children);
        }
    }

    cout << "Results: " << endl;
    print(families);
    return 0;
}
