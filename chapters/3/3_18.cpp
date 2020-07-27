#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char **argv)
{
    vector<int> ivec;
    // ivec[0] = 42;
    ivec.push_back(42);

    cout << "output: " << ivec[0] << endl;

    return 0;
}