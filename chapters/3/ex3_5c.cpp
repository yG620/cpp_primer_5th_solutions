#include <iostream>
using namespace std;

int main(int argc, const char **argv) {
    string s, s_sum;

    while (cin >> s) {
        s_sum += (s.empty() ? "" : " ") + s;
    }

    cout << "The string is " << s_sum << endl;

    return 0;
}