#include <iostream>
#include "Sales_item.h"

int main(int argc, const char **argv)
{

    Sales_item book, sum;

    while (std::cin >> book)
    {
        sum += book;
    }

    std::cout << sum << std::endl;

    return 0;
}
/*
 * bugs: 1. The program only can count two items.
 */