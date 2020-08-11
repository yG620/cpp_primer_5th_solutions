//
//  ex7_11.hpp
//  Exercise 7.11
//
//  Created by yG620 on 20/08/08.
//

#ifndef CP5_ex7_11_h
#define CP5_ex7_11_h
#include <iostream>
#include <string>

struct Sales_data {
    // inside constructor
    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s) {}
    Sales_data(const std::string &s, unsigned n, double p)
        : bookNo(s), units_sold(n), revenue(n * p) {}

    // outside constructor declaration
    Sales_data(std::istream &is);

    std::string const &isbn() const { return bookNo; };
    Sales_data &combine(const Sales_data &);

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// nonmember functions
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

// member functions.
Sales_data &Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

// outside constructor
Sales_data::Sales_data(std::istream &is) {
    read(is, *this);
    // Second parameter is a reference to a Sales_data object.
    // we use this to access the object as a whole, rather than a
    // member of the object. In this case, we use *this to pass
    // object as an argument to the read function.
}

#endif
