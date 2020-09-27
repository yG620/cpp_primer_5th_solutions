//
// ex12_07.cpp
// Exercise 12.07
//
// Created by yG620 on 20/9/23
//
// @Brief    >   Write a function that returns a dynamically allocated vector
// of ints. Pass that vector to another function that reads the standard input
// to give values to the elements. Pass the vector to another function to print
// the values that were read. Remember to delete the vector at the
// appropriate time.
//
// 12.6 <---> 12.7
// @KeyPoint >  1. vector<int> * ---> shared_ptr<vector<int>>;
// @KeyPoint >  2. new vector<int> ---> make_shared<vector<int>>();
// @KeyPoint >  3. no delete function

#include <iostream>
#include <memory>
#include <vector>

using namespace std;

shared_ptr<vector<int>> allocator_vector() {
    return make_shared<vector<int>>();
}

void add_value_to_vector(shared_ptr<vector<int>> vec) {
    int value;
    while (cin >> value) vec->push_back(value);
}

void print_value(shared_ptr<vector<int>> vec) {
    // access elements
    for (const auto &elem : *vec) { 
        cout << elem << " ";
    }
    cout << endl;
}

int main() {
    shared_ptr<vector<int>> vec = allocator_vector();
    if (!vec) {
        cout << "Out of memory" << endl;
        return -1;
    }

    add_value_to_vector(vec);
    print_value(vec);

    return 0;
}
