#include <iostream>
using namespace std;

int main(int argc, const char **argv) {
    string s1, s2;
    while (cin >> s1 >> s2) {
        if (s1 == s2)
            cout << "The two strings have the same length." << endl;
        else
            cout << "The larger string is " << (s1 > s2 ? s1 : s2) << endl;
    }

    return 0;
}