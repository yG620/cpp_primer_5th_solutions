#include <iostream>
#include "Sales_data.h"

using namespace std;

int main()
{   
    Sales_data total;

    if (read(cin, total)){
        Sales_data trans;
        while (read(cin, trans)){
            if(total.isbn() == trans.isbn())
                total = add(total, trans);
            else{
                print(cout, total);
                total = trans;
            }
        }
        print(cout, total);
    }
    else {
        std::cerr << "No data?!" << std::endl;
        return -1;  
    }
    return 0;
}