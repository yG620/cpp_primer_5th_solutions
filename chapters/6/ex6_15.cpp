#include <iostream>
#include <vector>
#include <string>

using namespace std;

int find_char(const string &s, char c, int &occurs)
{
    // int ret = -1;
    auto ret = s.size();

    for (decltype(ret) i = 0; i != s.size(); i++)
    {
        if (s[i] == c)
        {
            if (ret == s.size())
                ret = i;
            occurs++;
        }
    }

    if (ret == s.size())
    {
        cout << "This character is not in the string." << endl;
        ret = -1;
    }

    return ret;
}

int main(int argc, const char **argv)
{
    int occurs = 0, index = 0;
    char c;
    cout << "Please input: ";
    cin >> c;

    string s = "wedauddfgddgoensggjiaag";

    index = find_char(s, c, occurs);

    cout << c << "index = " << index;
    cout << "  occurs = " << occurs << endl;

    return 0;
}