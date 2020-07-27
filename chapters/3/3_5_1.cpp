#include <iostream>
using namespace std;

int main(int argc, const char **argv)
{
    string s, results;
    char is_input = 'y';

    cout << "Please input a string " << endl;

    while (cin >> s)
    {
        results += s;
        cout << "Whether to continue, y or n?" << endl;
        cin >> is_input;
        if (is_input == 'y' || is_input == 'Y')
            cout << "Please again" << endl;

        else
            break;
    }

    cout << "results = " << results << endl;

    return 0;
}