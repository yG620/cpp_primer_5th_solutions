//
//  ex7_05.h
//  Exercise 7.5
//
//  Created by yG620 on 20/08/08.
//

#ifndef CP5_ex7_05_h
#define CP5_ex7_05_h

#include <string>

class Person {
private:
    std::string name;
    std::string address;   
public:
    std::string getName() const { return name; }
    std::string getAddress() const { return address; }
};
 

#endif
