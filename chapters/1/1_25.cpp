#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item total, trans;
    // int total = 0;

    if (std::cin >> total)
    {
        // total = 1;
        while (std::cin >> trans)
        {
            if (total.isbn() == trans.isbn())
            {
                // total++;
                total += trans;
            }
            else
            {
                std::cout << "total: " << total << std::endl;
                // total = 1;
                total = trans;
            }
        }
        std::cout << "total: " << total << std::endl;
    }

    return 0;
}
