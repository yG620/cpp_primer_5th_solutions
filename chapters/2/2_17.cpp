#include <iostream>

int main(int argc, const char **argv)
{
    int i, &ri = i;

    i = 5;
    ri = 10;

    std::cout << i << "  " << ri << std::endl;
    // predication: 10 10
    // real: 10 10

    return 0;
}