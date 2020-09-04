# 第十章 泛型算法

## 练习 10.5

> 在本节对名册（`roster`）调用`equal`的例子中，如果两个名册中保存的都是C风格字符串而不是`string`，会发生什么？

For such case, std::equal is going to compare the address value rather than the string value. 
So the result is not the same as std::string. Try to avoid coding this way. 
Check [#227](https://github.com/Mooophy/Cpp-Primer/issues/227) for more detail.