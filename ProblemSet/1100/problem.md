# 输出月历
Time Limit: 1 Sec  Memory Limit: 2 MB


## Description
已知每月1号是星期几，输出当月月历。每个月都按30天算。

## Input
输入为一个整数n，1<=n<=7。n为1表示本月1日是星期一，n为2表示1号为星期二，以此类推，n为7时表示1日为星期天。

## Output
输出月历。月历的第一行为表头"Sun Mon Tue Wen Thu Fri Sat"，表示星期日～星期六。第二行开始的每行为一个星期，把每月的1日～30日的阿拉伯数字填入其中。每列占3个字符，其中的数字右对齐，每两列之间一个空格分隔，每行最后一个数字后面不要有空格。1日不为星期天的前面补足空格，30日后面不输出空格。

## Sample Input
```
3
```
## Sample Output
```
Sun Mon Tue Wen Thu Fri Sat
              1   2   3   4
  5   6   7   8   9  10  11
 12  13  14  15  16  17  18
 19  20  21  22  23  24  25
 26  27  28  29  30
```

## HINT
首先分析清楚输出和日期之间对应的规律，用循环内嵌套判断条件很容易实现不同格式日期的输出。