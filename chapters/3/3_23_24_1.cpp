#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char **argv)
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

    int value = 2;

    auto begin = v.begin(), end = v.end();
    auto first = v.begin();
    auto middle = v.begin() + (end - begin) / 2;

    while (middle != v.end() && *middle != value)
    {
        if (value < *middle)
            end = middle;
        else
            begin = middle + 1;
        // middle = begin + (end - begin) / 2;
        middle = (begin + end) / 2;
    }

    cout << "location = " << middle - first << endl;

    return 0;
}