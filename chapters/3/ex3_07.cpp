#include <iostream>
#include <string>
#include<typeinfo>

using namespace std;

int main(int argc, const char **argv) {
    string str;
    cout << typeid(str).name() << endl;

    while (cin >> str) {
        for (char &i : str) 
            i = 'X';         
    }
    cout << "After the transformation, the string is " << str << endl;
    return 0;
}