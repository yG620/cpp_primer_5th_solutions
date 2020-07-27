#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char **argv)
{
    vector<int> source(10, 0);
    unsigned grade;
    
    while (cin >> grade)
        if (grade <= 100)   
        {
            source[grade / 10]++;
        }

    for (auto i : source)
        cout << i << " ";
    cout << endl;

    return 0;
}