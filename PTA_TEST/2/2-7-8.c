/*
本题要求两个给定正整数的最大公约数和最小公倍数。

输入格式:
输入在一行中给出两个正整数M和N（≤1000）。

输出格式:
在一行中顺序输出M和N的最大公约数和最小公倍数，两数字间以1空格分隔。
*/

// @Author:longyan
// @Date:2022/5/7

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int m, n;
    scanf("%d%d", &m, &n);
    if (m < n)
    {
        int temp = m;
        m = n;
        n = temp;
    }
    int q = m * n;
    int r = m % n;
    while (r != 0)
    {
        m = n;
        n = r;
        r = m % n;
    }

    printf("%d %d", n, q / n);
    return 0;
}
