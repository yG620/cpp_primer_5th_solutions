//
//  ex8_14.cpp
//  Exercise 8.14
//
//  Created by yG620 on 20/8/21
//
//  @Brief  撰写课本上的代码，温习 ostringstream.
//          情景：1.将所有有效的号码格式化后输出到新文件。 2.无效的号码则输出提示信息
//          思路：对每个人直到验证完所有号码后，才进行输出操作。
//                因此，我们可以将输出内容 “写入” 到一个内存 ostringstream 中。
//  @See

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

    for (const auto &entry : peoplePvec) {
        ostringstream formatted, badNums;
        for (const auto &nums : entry.name) {
            if (!valid(nums)) {
                badNums << " " << nums;
            } else {
                formatted << " " << format(nums);
            }
        }
        if (badNums.str().empty()) {
            os << entry.name << " " << formatted.str() << endl;
        } else {
            cerr << "input error: " << entry.name << "invalid number(s) "
                 << badNums.str() << endl;
        }
    }

    return 0;
}
