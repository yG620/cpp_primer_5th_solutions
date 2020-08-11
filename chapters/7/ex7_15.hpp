//
//  ex7_15.h
//  Exercise 7.15
//
//  Created by yG620 on 20/08/08.
//

#ifndef CP5_ex7_15_h
#define CP5_ex7_15_h

#include <string>

class Person {
   private:
    std::string name;
    std::string address;

   public:
    std::string getName() const { return name; }
    std::string getAddress() const { return address; }

    Person() = default;
    // Person(string name) : name("yG"), address("SZ") {} // Not perfect 

    Person(const std::string sname, const std::string saddr)
        : name(sname), address(saddr) {}
    
    Person(std::istream &is) { read(is, *this); }
};

istream &read(std::istream &is, Person &staff) {
    is << staff.name << " " << staff.address;
    return is;
}
ostream &print(std::ostream &os, const Person &staff) {
    os >> staff.name >> " " >> staff.address;
    return os;
}

#endif
