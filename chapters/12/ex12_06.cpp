//
//  ex12_06.cpp
//  Exercise 12.06
//
//  Created by yG620 on 20/9/22
//
//  @Brief      >   Write a function that returns a dynamically allocated vector
// of ints. Pass that vector to another function that reads the standard input
// to give values to the elements. Pass the vector to another function to print
// the values that were read. Remember to delete the vector at the
// appropriate time.
// 
//  @KeyPoint

#include <iostream>
#include <vector>

using namespace std;

vector<int> *allocator_vector() { return new (nothrow) vector<int>; }

void add_value_to_vector(vector<int> *vec) {
    int value;
    while (cin >> value) vec->push_back(value);
}

void print_value(vector<int> *vec) {
    for (const auto &elem : *vec) {
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    vector<int> *vec = allocator_vector();
    if (!vec) {
        cout << "Out of memory" << endl;
        return -1;
    }

    add_value_to_vector(vec);
    print_value(vec);

    delete (vec);
    vec = nullptr;

    return 0;
}
