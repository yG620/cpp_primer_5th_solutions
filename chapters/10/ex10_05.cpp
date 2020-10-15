//
//  ex10_04.cpp
//  Exercise 10.4
//
//  Created by yG620 on 20/9/4
//
//  @Brief      > In the call to equal on rosters, what would happen if both
// rosters held C-style strings, rather than library strings?
//
//  @KeyPoint   1. Please refer to the problem set for the answer.

#include <algorithm>
#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char const *argv[]) {
    char *p[] = {"Hello", "World", "!"};
    char *q[] = {strdup(p[0]), strdup(p[1]), strdup(p[2])};
    char *r[] = {p[0], p[1], p[2]};

    cout << equal(begin(p), end(q), q) << endl;
    cout << equal(begin(p), end(r), r) << endl;

    return 0;
}
