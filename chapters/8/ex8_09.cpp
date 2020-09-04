//
//  ex8_09.cpp
//  Exercise 8.9
//
//  Created by yG620 on 20/8/19
//

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

istringstream& func(istringstream& is, string& str) {
    while (is >> str) cout << str << endl;
    str.clear();

    return is;
}

int main() {
    string str;
    getline(cin, str);
    istringstream record(str);

    istringstream& is = func(record, str);
    cout << is.rdstate() << endl;

    return 0;
}

/*
 * Note: istream& func(istream& is){} <--> istringstream& func(istringstream& is){} 
 */