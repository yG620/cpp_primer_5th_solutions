#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char **argv) {
    vector<int> v_numbers;
    vector<int> v_sum;

    int number = 0, i = 0, sum = 0;

    cout << "Please input integers: ";

    while (cin >> number) {
        v_numbers.push_back(number);
    }

    for (auto &element : v_numbers) {
        // &element += &(element + 1);
        sum = v_numbers[i] + v_numbers[i + 1];
        v_sum.push_back(sum);
        i++;

        if (i == v_numbers.size() - 1) {
            break;
        }
    }

    for (auto &element : v_sum) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
