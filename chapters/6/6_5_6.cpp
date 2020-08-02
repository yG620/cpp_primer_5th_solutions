#include <iostream>
#include <vector>

using namespace std;

size_t count_calls()
{
    static size_t count = 0;
    count++;
    cout << "count: " << count << endl;

    return count;
}

int main(int argc, const char **argv)
{
    for (size_t i = 0; i != 10; ++i)
        count_calls();
        
    // cout << count_calls << " calls" << endl;

    return 0;
}