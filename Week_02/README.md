# 第五课

## 哈希表
通过哈希函数将key转换为一个int类型,映射到数组的下标,数组随机访问速度是O(1)的，所以哈希表的查找也是O(1)

时间复杂度:
- 插入: O(1)
- 查找: O(1)
- 删除: O(1)

# 第六课

## 二叉树
树是一种非线性的数据结构,最常用的是二叉树,二叉树查找是O(logn)级别,相对于哈希表的优势是支持排序,哈希表是无序的排序是O(nlogn)级别,而二叉树只需要中序遍历是O(n)级别

时间复杂度:
- 插入: O(logn)
- 查找: O(logn)
- 删除: O(logn)


## 堆
堆是一个完全二叉树,堆中每一个节点的值都必须大于等于（或小于等于）其子树中每个节点的值,所以堆可以用数组实现,一般数组0下标做哨兵,左子节点下标:n*2,右子节点下标:n*2+1,父亲节点下标:n/2


## 图
图和树一样也是一种非线性结构,和树的区别是图有环,图分为有向图和无向图,无向图使用二维数组表示,有向图使用一位数组和链表表示,常用的是广度优先遍历和深度优先遍历,遍历和树的区别是要记录访问过的点,不然会出现环导致死循环

