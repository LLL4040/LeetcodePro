# Z字形变换

## 题目描述

将一个给定字符串根据给定的行数，以从上往下、从左到右进行 Z 字形排列。

比如输入字符串为 "LEETCODEISHIRING" 行数为 3 时，排列如下：

>L  C   I   R
E T O E S I I G
E   D   H   N

之后，你的输出需要从左往右逐行读取，产生出一个新的字符串，比如：
>"LCIRETOESIIGEDHN"。

请你实现这个将字符串进行指定行数变换的函数：

>string convert(string s, int numRows);

示例 1:

>输入: s = "LEETCODEISHIRING", numRows = 3
输出: "LCIRETOESIIGEDHN"

示例 2:

>输入: s = "LEETCODEISHIRING", numRows = 4
输出: "LDREOEIIECIHNTSG"
解释:
L     D     R
E   O E   I I
E C   I H   N
T     S     G

## 笔记

感觉这个题目思路不难，但是通过尝试发现以下三种方法的速度差很多

* `vector<vector<char>> tmp(numRows, vector<char>(0));`
用下标的方式遍历tmp和s，用`tmp[i].push_back(s[x]);`添加字符，速度88 ms 内存16.3 MB
* `vector<string> tmp(min(numRows, int(s.size())));`并用下标方式遍历tmp和s，速度40 ms 内存12.7 MB
* `vector<string> tmp(min(numRows, int(s.size())));`并用`char x : s`和`string i : tmp`的方式遍历，速度28 ms 内存12.5 MB
