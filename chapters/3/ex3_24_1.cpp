#include <iostream>
#include <vector>
#include <string>

using namespace std;

/* input:   1 2 3 7 8 9
 * output:  10 10 10
 * 
 * input:   1 2 3 6 5
 * output:  6 8 3 
 */

int main(int argc, const char **argv)
{
    vector<int> v_numbers;
    int number = 0;

    while (cin >> number)
        v_numbers.push_back(number);

    for (auto head = v_numbers.begin(), tail = v_numbers.end() - 1; head != tail + 1; head++, tail--)
    {
        if (head == tail)
        {
            cout << *head << endl;
            break;
        }
        cout << *head + *tail << " ";
    }

    return 0;
}
