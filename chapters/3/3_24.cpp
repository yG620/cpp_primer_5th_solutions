#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char **argv)
{
    vector<int> v_numbers;
    vector<int> v_sum;

    int number = 0;

    cout << "Please input integers: ";

    while (cin >> number)
        v_numbers.push_back(number);

    for (auto it = v_numbers.begin(); it != v_numbers.end() - 1; it++)
    {
        // cout << *it << endl;
        cout << *it + *(it + 1) << " ";
    }
    cout << endl;

    // for (auto &element : v_sum)
    // {
    //     cout << element << " ";
    // }
    // cout << endl;

    return 0;
}
