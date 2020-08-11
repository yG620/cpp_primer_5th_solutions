#include <iostream>
#include <typeinfo>
#include <vector>

using namespace std;

int main(int argc, const char **argv) {
    vector<string> svec;

    string i;  // Note: i can't defined char type
    while (cin >> i) {
        svec.push_back(i);
    }

    for (auto element : svec) cout << element << " ";
    cout << endl;

    return 0;
}
