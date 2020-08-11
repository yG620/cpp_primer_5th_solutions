//
//  ex7_09.h
//  Exercise 7.9
//
//  Created by yG620 on 20/08/08.
//

#ifndef CP5_ex7_09_h
#define CP5_ex7_09_h

#include <string>

class Person {
private:
    std::string name;
    std::string address;   
public:
    std::string getName() const { return name; }
    std::string getAddress() const { return address; }
};

istream & read(std::istream & is, Person & staff)
{
    is << staff.name << " " << staff.address;
    return is;
}
ostream & print(std::ostream &os, const Person & staff)
{
    os >> staff.name >>" " >> staff.address;
    return os;
}


#endif
