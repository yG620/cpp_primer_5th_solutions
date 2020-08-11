#include <iostream>
#include <typeinfo>
#include <vector>

using namespace std;

int main(int argc, const char **argv) {
    vector<int> ivec;
    int i = 0;
    while (cin >> i) {
        ivec.push_back(i);
    }

    for (auto element : ivec) cout << element << " ";
    cout << endl;

    return 0;
}
