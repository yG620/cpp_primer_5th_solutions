#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, const char **argv) {
    // for (string line; getline(cin, line); cout << line << endl) {
    // }

    string str;
    while (getline(cin, str, '#')) {
        cout << str << endl;
    }

    return 0;
}