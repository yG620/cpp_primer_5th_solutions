# 第十一章 关联容器

## 练习11.1

> 描述`map`和`vector`的不同。

### 出题思路

- 理解顺序容器和关联容器的不同。
 
### 解答

- `map` 是关联容器， `vector` 是顺序容器。

- 顺序容器
  - 目的：随机访问元素。
  - 底层数据结构：数组和链表。

- 关联容器
  - 目的：高效实现 “按值访问元素” 这类操作。
  - 底层数据结构：红黑树、哈希表。


## 练习11.8

> 编写一个程序，在一个`vector`而不是一个`set`中保存不重复的单词。使用`set`的优点是什么？

form cpluplus.com set:

> Sets are containers that store unique elements following a specific order.

so the set is ordered AND item are uniquely represented
while vect:

> Vectors are sequence containers representing arrays that can change in size.

so vector is in the order you fill it AND can hold multiple identical items
prefer set:
> if you wish to filter multiple identical values
> if you wish to parse items in a specified order (doing this in vector requires to specifically sort vector).

prefer vector:
> if you want to keep identical values
> if you wish to parse items in same order as you pushed them (assuming you don't process the vector order)

see:
> http://stackoverflow.com/questions/8686725/what-is-the-difference-between-stdset-and-stdvector

## 练习11.10

> 可以定义一个`vector<int>::iterator` 到 `int` 的`map`吗？`list<int>::iterator` 到 `int` 的`map`呢？对于两种情况，如果不能，解释为什么。

### 出题思路

- 理解关联容器对关键字类型的操作。
 
### 解答

- 因为有序容器要求关键字类型必须支持比较操作 `<`，因此 `map<vector<int>::iterator, int> m1;` 是可以的。但 `map<list<int>::iterator, int> m1;` 是不行的。因为 `list` 的元素不是连续存储，其迭代器不支持比较操作。

## 练习11.12
> construct a Sales_data object at the end of c.

- method:
// uses the three-argument `Sales_data` constructor
`c.emplace_back("978-0590353403", 25, 15.99);`
// error: there is no version of `push_back` that takes three arguments
`c.push_back("978-0590353403", 25, 15.99);`
// ok: we create a temporary `Sales_data` object to pass to `push_back`
`c.push_back(Sales_data("978-0590353403", 25, 15.99));`

- summary:
The call to `emplace_back` and the second call to `push_back `both create new
`Sales_data` objects. In the call to `emplace_back`, that object is created directly in space managed by the container. The call to `push_back` creates a local temporary
object that is pushed onto the container.