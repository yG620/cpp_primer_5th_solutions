//
//  ex7_23.h
//  Exercise 7.23
//
//  Created by yG620 on 20/08/12
//

#ifndef CP5_ex7_23_h
#define CP5_ex7_23_h

#include <string>

class Screen {
   public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c)
        : height(ht), width(wd), contents(ht * wd, c) {}
    char get() const { return contents[cursor]; }
    inline char get(pos ht, pos wd) const;

   private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
}

char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents(row + c);
}

#endif
