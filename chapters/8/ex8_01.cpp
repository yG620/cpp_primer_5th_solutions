//
//  ex8_01.cpp
//  Exercise 8.1
//
//  Created by yG620 on 20/8/17
//

#include <iostream>
#include <string>

using namespace std;

istream& func(istream& is, string& str) {
    while (is >> str) cout << str << endl;
    str.clear();

    return is;
}

int main() {
    string str;

    istream& is = func(cin, str);
    cout << is.rdstate() << endl;

    return 0;
}
