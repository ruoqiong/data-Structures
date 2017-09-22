# 线性表——数组描述
## 线性表的数据结构
线性表(linear list)，也称为有序树(ordered list)。线性表的主要关系为先后关系。

* 抽象数据类型linearList

* 抽象类linearList

  C++支持两种类：抽象类（包含纯虚函数的类）

  ​                              具体类（不包含纯虚函数的类）

## 数组描述

定义一个一维数组$element$来存储线性表的元素，$arrayLength$ 是数组长度或容量，$listSize$记录当前存储的线性表的元素的个数。

线性表元素位置的确定：$location(i)=i$ 该公式也不是唯一的映射方法。

创建一个数组类arrayList，为linearList的派生类

