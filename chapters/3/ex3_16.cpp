#include <iostream>
#include <typeinfo>
#include <vector>

using namespace std;

int main(int argc, const char **argv) {
    vector<int> v1;
    vector<int> v2(10);

    vector<int> v3(10, 42);
    for (auto element : v3) cout << element << " ";
    cout << endl;

    vector<int> v4{10};
    vector<int> v5{10, 42};
    vector<string> v6{10};

    vector<string> v7{10, "hi"};
    for (auto element : v7) cout << element << " ";
    cout << endl;

    vector<string> v8{"hello", "hello"};
    for (auto element : v8) cout << element << " ";
    cout << endl;

    return 0;
}
