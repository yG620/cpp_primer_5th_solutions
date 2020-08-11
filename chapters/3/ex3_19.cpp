#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char **argv) {
    // method 1
    vector<int> ivec1(10, 42);

    // method 2
    vector<int> ivec2(10);
    for (auto &i : ivec2) i = 42;

    // method 3
    vector<int> ivec3 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

    // method 4
    vector<int> ivec4{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

    // method 5
    vector<int> ivec5;
    for (int i = 0; i < 10; i++) ivec5.push_back(42);

    return 0;
}