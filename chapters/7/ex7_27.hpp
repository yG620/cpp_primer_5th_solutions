//
//  ex7_27.h
//  Exercise 7.27
//
//  Created by yG620 on 20/08/13
//

#ifndef CP5_ex7_27_h
#define CP5_ex7_27_h

#include <string>

class Screen {
   public:
    using pos = std::string::size_type;

    // constructor
    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
    Screen(pos ht, pos wd, char c)
        : height(ht), width(wd), contents(ht * wd, c) {}

    // member functions
    char get() const;
    char get(pos r, pos c) const;

    Screen& move(pos r, pos c);
    Screen& set(char c);
    Screen& set(pos r, pos c, char ch);
    const Screen& display(std::ostream& os) const;
    Screen& display(std::ostream& os);

   private:
    void do_display(std::ostream& os) const { os << contents; }  // ok

   private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
    // void do_display(std::ostream& os) { os << contents; }  // error: bug1
};

inline char Screen::get() const { return contents[cursor]; }

inline char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
}

inline Screen& Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline Screen& Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

inline Screen& Screen::set(pos r, pos c, char ch) {
    pos row = r * width;
    cursor = row + c;
    contents[cursor] = ch;
    return *this;
}

inline Screen& Screen::display(std::ostream& os) {
    do_display(os);
    return *this;
}

inline const Screen& Screen::display(std::ostream& os) const {
    do_display(os);
    return *this;
}

#endif

/*
const Screen& display(std::ostream& os) const;

Logically, displaying a Screen doesn’t change the object, so we should make
display a const member. If display is a const member, then this is a pointer
to const and *this is a const object. Hence, the return type of display must be
const Sales_data&.

bug1:
ex7_27.hpp:32:22: error: passing ‘const Screen’ as ‘this’ argument discards
qualifiers [-fpermissive] do_display(os);                      ^
ex7_27.hpp:44:10: note:   in call to ‘void Screen::do_display(std::ostream&)’
     void do_display(std::ostream& os) { os << contents; }

*/