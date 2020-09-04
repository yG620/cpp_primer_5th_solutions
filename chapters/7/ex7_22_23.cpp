//
//  ex7_13.cpp
//  Exercise 7.13
//
//  Created by yG620 on 20/8/9
//
#include <iostream>
#include <string>

using namespace std;

class Screen {
   public:
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c)
        : height(ht), width(wd), contents(ht * wd, c) {}
    char get() const { return contents[cursor]; }
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);

   private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
}

inline Screen &
Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents(row + c);
}

One version returns the character currently denoted by the cursor;
the other returns the character at a given position specified by its
    row and column.Screen myscreen;
char ch = myscreen.get();  // calls Screen::get()
ch = myscreen.get(0, 0);   // calls Screen::get(pos, pos)

int main() { return 0; }
