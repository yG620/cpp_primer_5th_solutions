#include <iostream>
#include <vector>

/*
 * input: 42 65 95 100 39 67 95 76 88 76 83 92 76 93
 * output: 0 0 0 1 1 0 2 3 2 4 1
 * */
using namespace std;

int main(int argc, const char **argv)
{
    vector<int> source(11, 0);
    unsigned grade;

    while (cin >> grade)
    {
        
        if (grade <= 100)
        {
            source[grade / 10]++;

        if (cin.get() == '\n') //cin.peek() == '\n'
        {
            break;
        }
    }
    for (auto i : source)
        cout << i << " ";
    cout << endl;

    return 0;
}