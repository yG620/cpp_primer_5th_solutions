#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char **argv) {
    vector<int> v1(10, 1);  //提供的值是用来构造（construct）vector对象的
                            //两个初始值分别说明了 vector 对象的容量和元素的初值
    vector<int> v2{
        10, 1};  //可以表述为：我们想列表初始化（list initialize）该 vector 对象

    cout << "v1 value" << endl;
    for (auto i : v1) cout << i << " ";
    cout << endl;

    cout << "v2 value" << endl;
    for (auto i : v2) cout << i << " ";
    cout << endl;

    // vector<string> v3("hi");  // 错误：不能使用字符串字面值构建 vector 对象
    vector<string> v4{10, "hello"};  // 编译器确认不能使用列表初始化，会尝试使用默认值初始化
                                     // vector 对象

    // cout << "v3 string" << endl;
    // for (auto i : v3)
    //     cout << i << " ";
    // cout << endl;

    cout << "v4 string" << endl;
    for (auto i : v4) cout << i << " ";
    cout << endl;

    return 0;
}