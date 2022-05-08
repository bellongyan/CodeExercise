/*
本题要求编写程序，找出给定一系列整数中的最小值。

输入格式：
输入在一行中首先给出一个正整数n，之后是n个整数，其间以空格分隔。

输出格式：
在一行中按照“min = 最小值”的格式输出n个整数中的最小值。
*/

// @Author:longyan
// @Date:2022/5/7

#include <stdio.h>
#define MAXN 1000
int main()
{
    int n;
    int num[MAXN];
    int minimal = 99999;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] < minimal)
            minimal = num[i];
    }
    printf("min = %d", minimal);
    return 0;
}