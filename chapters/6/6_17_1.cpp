#include <iostream>
#include <vector>
#include <string>
#include <iterator>

using namespace std;

bool HasUpper(const string &s)
{
    for (auto c : s)
        if (isupper(c))
            return true;
    return false;
}

void ChangeToLower(string &s)
{
    for (auto &c1 : s)
        if (HasUpper(s))
            c1 = tolower(c1);
}

int main(int argc, const char **argv)
{
    string s;
    cout << "Please input a string: ";
    cin >> s;

    if (HasUpper(s))
    {
        ChangeToLower(s);
        cout << "After change: " << s << endl;
    }
    else
        cout << "The string has no upper." << endl;

    return 0;
}