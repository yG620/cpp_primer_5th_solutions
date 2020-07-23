#include <iostream>
using namespace std;

int main(int argc, const char **argv)
{
    string s, s_sum;

    while (cin >> s)
    {
        s_sum += s;
        s_sum += " ";
    }

    cout << "s = " << s_sum << endl;

    return 0;
}