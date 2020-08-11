#include <iostream>
using namespace std;

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    Sales_data total;  
    
    if (cin >> total.bookNo >> total.units_sold >> total.revenue){
        Sales_data trans;           
        while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (total.bookNo == trans.bookNo){
                total.units_sold = total.units_sold + trans.units_sold;
                total.revenue = total.revenue * total.units_sold;
                trans.revenue = trans.revenue * trans.units_sold;
            } 
            else {           
                total.revenue = total.revenue * total.units_sold;
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";            
                cout << total.revenue/total.units_sold << endl;                  
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << " ";
        cout << total.revenue/total.units_sold << endl;
    }
    else {
        cerr << "No data?!" << endl;
        return -1;  
    }

    return 0;
}