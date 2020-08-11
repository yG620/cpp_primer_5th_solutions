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
    
    for (auto iter = v_numbers.cbegin(); iter != v_numbers.cend() - 1; iter++)
    {
        // cout << *iter << " ";
        // cout << *(iter + 1) << endl;
        // v_sum.push_back(*iter + *(iter + 1));
    }

    // for (auto &element : v_sum)
    // {
    //     cout << element << " ";
    // }
    // cout << endl;

    return 0;
}
