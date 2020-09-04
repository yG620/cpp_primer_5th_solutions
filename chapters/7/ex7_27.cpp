//
//  ex7_27.cpp
//  Exercise 7.27
//
//  Created by yG620 on 20/8/13
//
#include "ex7_27.hpp"

#include <iostream>
#include <string>

using namespace std;

int main() {
    Screen myScreen(5, 5, 'X');
    myScreen.move(4, 0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";

    return 0;
}
