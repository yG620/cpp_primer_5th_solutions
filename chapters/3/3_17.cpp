#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char **argv)
{
    vector<string> word;

    string s;
    char choose;
    cout << "Please input one word: ";

    while (cin >> s)
    {
        word.push_back(s); // KP_1

        cout << "Continue：y or n ? ";
        cin >> choose;
        if (choose != 'y' && choose != 'Y')
            break;  
        cout << "Please input again: ";
    }
    
    for (auto &element : word)
    {
        for (auto &i : element) // KP_2
            i = toupper(i); // KP_3
        cout << element << endl;
    }
 
    return 0;
}