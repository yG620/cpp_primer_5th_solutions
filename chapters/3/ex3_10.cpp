#include <cctype>
#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main(int argc, const char **argv) {
    string str;
    cout << "Enter a string of characters including punctuation: " << endl;

    while (cin >> str) {
        for (auto i : str) {
            if (!ispunct(i)) cout << i << " ";
        }
    }
    return 0;
}
