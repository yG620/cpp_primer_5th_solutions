#include <iostream>
using namespace std;

int main(int argc, const char **argv) {
    string s1, s2;

    cin >> s1 >> s2;
    if (s1 >= s2) {
        cout << "s1 >= s2" << endl;
    } else {
        cout << "s1 < s2" << endl;
    }

    // auto s1_len, s2_len;
    auto s1_len = s1.size();
    auto s2_len = s2.size();

    if (s1_len == s2_len) {
        cout << "s1.size == s2.size " << endl;
    } else {
        cout << "s1.size != s2.size " << endl;
    }

    return 0;
}