/*
一个数组A中存有N（>0）个整数，在不允许使用另外数组的前提下，将每个整数循环向右移M（≥0）个位置，
即将A中的数据由（A0​A1​⋯AN−1​）变换为（AN−M​⋯AN−1​A0​A1​⋯AN−M−1​）（最后M个数循环移至最前面的M个位置）。
如果需要考虑程序移动数据的次数尽量少，要如何设计移动的方法？

输入格式:
每个输入包含一个测试用例，第1行输入N（1≤N≤100）和M（≥0）；第2行输入N个整数，之间用空格分隔。

输出格式:
在一行中输出循环右移M位以后的整数序列，之间用空格分隔，序列结尾不能有多余空格。
*/

// @Author:longyan
// @Date:2022/5/23

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, m;
    int num[100];
    scanf("%d %d", &n, &m);
    m = m % n;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    for (int i = n - m; i < n; i++)
    {
        printf("%d ", num[i]);
    }
    for (int i = 0; i < n - m - 1; i++)
    {
        printf("%d ", num[i]);
    }
    printf("%d", num[n - m - 1]);

    return 0;
}
