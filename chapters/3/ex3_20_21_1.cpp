#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char **argv)
{
    string s1("some string");

    // method 1
    if (s1.begin() != s1.end())
    {
        auto iter = s1.begin(); //iter 一个迭代器的变量，表示 s 的第一个字符
        *iter = toupper(*iter); //对字符进行操作
    }

    // method 2
    string s2 = s1;
    for (auto iter = s2.begin(); iter != s2.end(); ++iter)
        *iter = toupper(*iter);

    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;

    return 0;
}