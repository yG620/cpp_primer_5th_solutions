#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

int main(int argc, const char **argv) {
    string str;

    cin >> str;
    decltype(str.size()) i = 0;
    while (i < str.size()) {
        str[i++] = 'X';
    }
    cout << "After the transformation, the string is " << str << endl;

    return 0;
}