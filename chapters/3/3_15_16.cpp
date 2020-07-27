#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char **argv)
{
    vector<int> v{1,2,3,4,5,6,7,8,9};
    for(auto &i : v)
        i *= i;
    for(auto &i : v)
    cout << " i = " << i << endl;
    return 0;
}