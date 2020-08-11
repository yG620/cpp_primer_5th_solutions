#include <iostream>
using namespace std;

int main(int argc, const char **argv) {
    string s1, s2;
    while (cin >> s1 >> s2) {
        if (s1.size() == s2.size())
            cout << "The two strings are equal." << endl;
        else
            cout << "The longer string is "
                 << (s1.size() > s2.size() ? s1 : s2) << endl;
    }

    return 0;
}