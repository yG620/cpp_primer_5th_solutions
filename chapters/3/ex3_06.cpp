#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char **argv) {
    string str;
    while (cin >> str) {
        for(auto &i : str)
            i = 'X';
    }
    cout << "After the transformation, the string is " << str << endl;
    return 0;
}