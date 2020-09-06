//
//  ex7_26.h
//  Exercise 7.26
//
//  Created by yG620 on 20/9/6
//
//  @See ex7_21.h
//  @Add inline member function "Sales_data::avg_pric" 


#ifndef CP5_ex7_26_h
#define CP5_ex7_26_h

#include <iostream>
#include <string>

class Sales_data {
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs); // no need to declare "&"

public:
    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s) {}
    Sales_data(const std::string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(n * p) {}
    Sales_data(std::istream &is) { read(is, *this); }

    std::string isbn() const { return bookNo; }; // no need to declare "const &"
    Sales_data &combine(const Sales_data &);

private:
    inline double avg_price() const;

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// member functions.
Sales_data &Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

inline 
double Sales_data::avg_price() const {
    return units_sold ? revenue / units_sold : 0;
}

// friend functions
std::istream &read(std::istream &is, Sales_data &item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

#endif
