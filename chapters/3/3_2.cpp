#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main(int argc, const char **argv)
{
    string line;
    cin >> line;
    if (!line.empty())
        cout << "line is " << line << std::endl;
    else
        cout << "blank line" << std::endl;

    return 0;
}