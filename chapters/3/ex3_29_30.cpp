#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char **argv) {
    // top-level const：指针不变性。
    int i = 5;
    int *const p1 = &i;  // const 位于 * 和 p1 之间
    i = 10;
    cout << "i = " << i << endl;

    // low-level const：指针指向的对象或者内置类型不变。
    int j = 6;
    int k = 7;
    const int *p2 = &i;
    p2 = &k;
    cout << "*p2 = " << *p2 << endl;

    return 0;
}
