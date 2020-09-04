#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char **argv) {
    vector<int> ivec;
    // vector<int> ivec{42};
    
    // ivec[0] = 42;  // Segmentation fault (core dumped)
    ivec.push_back(42);

    cout << "output: " << ivec[0] << endl;

    return 0;
}