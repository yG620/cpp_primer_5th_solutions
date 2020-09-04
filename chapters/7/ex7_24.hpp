//
//  ex7_24.h
//  Exercise 7.24
//
//  Created by yG620 on 20/08/12
//

#ifndef CP5_ex7_24_h
#define CP5_ex7_24_h

#include <string>

class Screen {
   public:
    using pos = std::string::size_type;

    Screen() = default;
    Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
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
