#include <iostream>
#include "Sales_item.h"

int main(int argc, const char **argv)
{

    Sales_item book1, book2;

    std::cin >> book1 >> book2;

    std::cout << book1 + book2 << std::endl;

    return 0;
}