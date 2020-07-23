#include <iostream>
using std::cin;
using std::cout;
using std::string;

int main(int argc, const char **argv)
{
    string line;
    while (getline(cin, line))
        if (!line.empty() && (line.size() > 5)) 
            cout << "line is " << line << std::endl;
        else
            cout << "blank line" << std::endl;

    return 0;
}   