#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char **argv)
{
    string T = "aabbccddeeffee"; //原串
    string P = "ee";             //模式

    int count = 0;
    int begin = -1;
    while ((begin = T.find(P, begin + 1)) != string::npos)
    {
        count++;
        cout << "begin: " << begin << "  "
             << "count " << count << endl;
        begin = begin + P.length();
    }

    return 0;
}