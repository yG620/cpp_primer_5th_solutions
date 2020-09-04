//
//  ex8_13.cpp
//  Exercise 8.13
//
//  Created by yG620 on 20/8/20
//
//  @Brief  在 ex8_11.cpp 基础上，做以下修改：
//          1. 从一个文件内读入用户信息（姓名和电话号码）
//  @See    ex8_11.cpp

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

    ifstream ifs(argv[1]);

    while (getline(ifs, line)) {
        istringstream record(line);
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
