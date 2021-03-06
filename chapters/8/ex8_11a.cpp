//
//  ex8_11a.cpp
//  Exercise 8.11a
//
//  Created by yG620 on 20/8/20
//

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

struct PersonInfo {
    string name;
    vector<string> phonesSvec;
};

int main(int argc, char const *argv[]) {
    vector<PersonInfo> peoplePvec;
    string line, word;
    istringstream record;

    while (getline(cin, line)) {
        record.clear();
        record.str(line);

        PersonInfo info;
        record >> info.name;
        while (record >> word) {
            info.phonesSvec.push_back(word);
        }
        peoplePvec.push_back(info);
    }

    for (auto &people : peoplePvec) {
        cout << people.name << " ";
        for (auto &phone : people.phonesSvec) cout << phone << " ";
        cout << endl;
    }

    return 0;
}
