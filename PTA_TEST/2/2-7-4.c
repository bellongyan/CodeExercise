/*
本题要求编写程序，计算交错序列 1-2/3+3/5-4/7+5/9-6/11+... 的前N项之和。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中输出部分和的值，结果保留三位小数。
*/

// @Author:longyan
// @Date:2022/5/7

#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    double sum = 0;
    int sign = -1;
    for (int i = 1; i < n + 1; i++)
    {
        // 括号不是越多越好，返回的是浮点数的时候，要乘一下1.0，不然返回的可能还是整型数
        sum = sum + pow(sign, i + 1) * 1.0 * i / (2 * i - 1); 
    }

    printf("%.3lf", sum);
    return 0;
}