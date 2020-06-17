# Matrix Problem (III) : Array Practice
Time Limit: 1 Sec  Memory Limit: 4 MB


## Description
求两个矩阵A、B的乘积C=AB。根据矩阵乘法的定义，只有A的列数和B的行数相同才能相乘。可以确保所有运算结果都在int类型的范围之内。

## Input
输入数据为多个矩阵（最少2个），每个矩阵以两个正整数m和n开始，满足0<m,n<=100，接下来为一个m行n列的矩阵A。当输入的m和n均为0时，表示输入数据结束。

## Output
对输入的矩阵两两相乘：第1个和第2个相乘、第1个和第2个相乘的结果和第3个相乘……按顺序输出矩阵相乘的结果：每行两个元素之间用一个空格分开，每行最后一个元素之后为一个换行，在下一行开始输出矩阵的下一行。
若前k个矩阵相乘的结果和第k+1个矩阵无法相乘（即不满足矩阵乘法定义），则输出“Not satisfied the definition of matrix multiplication!”。然后用第k+1个矩阵去和第k+2个矩阵相乘。最后一个矩阵只做乘数。
每两组输出之间用一个空行分隔开。

## Sample Input
```
2 3
1 1 1
1 1 1
3 3
1 2 3
4 5 6
7 8 9
3 1
0
0
0
0 0

```
## Sample Output
```
12 15 18
12 15 18

0
0

```

## HINT
矩阵的乘法就是一行乘以一列加起来做一个元素。