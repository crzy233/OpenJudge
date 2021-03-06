# 学生成绩统计表
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
在学校里经常见到的成绩表，表的每行是一个学生的成绩，每列是各个科目的成绩。如下表所示。



你的任务是：输入这样的成绩表，统计出每个学生的总成绩和各个科目的平均成绩。如下表所示。






## Input
第一行为两个整数m,n，0<m<=50、0<n<=10，表示有m个学生和n个成绩。
后面有m+1行n+1列的一个表，表的第1行和第1列都是不含空白符的字符串，表的各列用若干空格分隔，表的各行用一个回车分隔。第1行的2～n+1列是各个科目的名字。第2～m+1行1列为学生姓名。第2行2列开始到第m+1行、n+1列为各学生的各科目成绩（浮点数）。



## Output
输出为一张表，表的大小为m+2行、n+2列，其中前m+1行n+1列的数据与输入相同。
表的最右侧一列为学生各科目成绩的总和，该列第1行的标题是“sum”。
表的最下面一行为各科目的所有学生平均成绩，该行的第1列标题是“average”。
表的第1列输出为8个字符左对齐，后面每列为5个字符右对齐，两列之间有2个空格。表的所有数据项（除第1行和第1列外）都输出为保留1位小数。表的每行用一个回车分隔，表的最右边一列的数据项后没有空格。
请注意：表的最右下角那项没有定义，不输出！最后1行的输出至最右一个科目的平均分结束，该行最后有回车。


## Sample Input
```
10 6
name    SCI   TECH    COM  CS106  SE309  CS101
Tom      88     77     66     55     44     33
Jerry    50    100     60    100     50    100
Zhang3   90   95.5     60     75     82     18
Li4      38     45     62     29     74     85
Wang5    88     75     63     36     99   33.3
Zhao6    99     99   99.5   97.5     42    100
Liu7     80     80   80.5   81.5   82.5     83
Wang8     7      6      5      4      3      2
Song9    10     20     30     40     50     60
Ma10     74   79.5     73     71     70     77

```
## Sample Output
```
name        SCI   TECH    COM  CS106  SE309  CS101    sum
Tom        88.0   77.0   66.0   55.0   44.0   33.0  363.0
Jerry      50.0  100.0   60.0  100.0   50.0  100.0  460.0
Zhang3     90.0   95.5   60.0   75.0   82.0   18.0  420.5
Li4        38.0   45.0   62.0   29.0   74.0   85.0  333.0
Wang5      88.0   75.0   63.0   36.0   99.0   33.3  394.3
Zhao6      99.0   99.0   99.5   97.5   42.0  100.0  537.0
Liu7       80.0   80.0   80.5   81.5   82.5   83.0  487.5
Wang8       7.0    6.0    5.0    4.0    3.0    2.0   27.0
Song9      10.0   20.0   30.0   40.0   50.0   60.0  210.0
Ma10       74.0   79.5   73.0   71.0   70.0   77.0  444.5
average    62.4   67.7   59.9   58.9   59.6   59.1
```

## HINT
