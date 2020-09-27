//
//  ex10_32.cpp
//  Exercise 10.32
//
//  Created by yG620 on 20/9/13
//
//  @Brief      >  Write a program that takes the names of an input file and
// two output files. The input file should hold integers. Using an
// istream_iterator read the input file. Using ostream_iterators, write
// the odd numbers into the first output file. Each value should be followed by
// a space. Write the even numbers into the second file. Each of these values
// should be placed on a separate line.
//
//  @KeyPoint   1.

#include <algorithm>
#include <deque>
#include <fstream>
#include <iostream>
#include <iterator>
#include <list>
#include <vector>

using namespace std;

// while method
void oneFile2TwoFiles1(istream& in, ostream& out1, ostream& out2) {
    istream_iterator<int> in_iter(in), in_eof;
    ostream_iterator<int> out_iter1(out1, " ");
    ostream_iterator<int> out_iter2(out2, "\n");

    while (in_iter != in_eof) {
        if (*in_iter & 1)
            *out_iter1++ = *in_iter;
        else
            *out_iter2++ = *in_iter;
        ++in_iter;
    }
}

// for each method
void oneFile2TwoFiles2(istream& in, ostream& out1, ostream& out2) {
    istream_iterator<int> in_iter(in), in_eof;
    ostream_iterator<int> out_odd_iter(out1, " ");
    ostream_iterator<int> out_even_iter(out2, "\n");

    for_each(in_iter, in_eof, [&out_odd_iter, &out_even_iter](const int i) {
        *(i & 0x1 ? out_odd_iter : out_even_iter)++ = i;
    });
}

// main function
int main(int argc, char const* argv[]) {
    if (argc != 4) {
        return -1;
    }

    ifstream ifs(argv[1]);
    if (!ifs) {
        cout << "Failed to open input file! " << endl;
        exit(1);
    }

    ofstream ofs_odd(argv[2]), ofs_even(argv[3]);

    oneFile2TwoFiles1(ifs, ofs_odd, ofs_even);
    
    oneFile2TwoFiles2(ifs, ofs_odd, ofs_even);

    return 0;
}
