/*
给定N个正整数，请统计奇数和偶数各有多少个？

输入格式：
输入第一行给出一个正整N（≤1000）；第2行给出N个非负整数，以空格分隔。

输出格式：
在一行中先后输出奇数的个数、偶数的个数。中间以1个空格分隔。
*/

// @Author:longyan
// @Date:2022/5/7

#include <stdio.h>
#define MAXN 1000
int main()
{
    int n;
    scanf("%d", &n);
    int num[MAXN];
    int odd = 0;  // 奇数
    int even = 0; // 偶数
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d\n", odd, even);

    return 0;
}