# 第十章 泛型算法

## 练习 10.5

> 在本节对名册（`roster`）调用`equal`的例子中，如果两个名册中保存的都是C风格字符串而不是`string`，会发生什么？

For such case, std::equal is going to compare the address value rather than the string value. 
So the result is not the same as std::string. Try to avoid coding this way. 
Check [#227](https://github.com/Mooophy/Cpp-Primer/issues/227) for more detail.

## 练习 10.8

> We said that algorithms do not change the size of the containers over which they operate.
> Why doesn’t the use of back_inserter invalidate this claim?

* The ability to insert and delete elements depends on the algorithm, but on the ability of the iterators passed to them.


## 练习10.38

> 列出5个迭代器类别，以及每类迭代器所支持的操作。

* 输入迭代器 : `==`,`!=`,`++`,`*`,`->`；只读，不写；单遍扫描，只能递增。
* 输出迭代器 : `++`,`*`；只写，不读；单遍扫描，只能递增。
* 前向迭代器 : `==`,`!=`,`++`,`*`,`->`；可读写，多遍扫描，只能递增。
* 双向迭代器 : `==`,`!=`,`++`,`--`,`*`,`->`；可读写，多遍扫描，可递增递减。
* 随机访问迭代器 : `==`,`!=`,`<`,`<=`,`>`,`>=`,`++`,`--`,`+`,`+=`,`-`,`-=`,`*`,`->`,`iter[n]`==`*(iter[n])`；可读写；多遍扫描；支持全部迭代器运算。