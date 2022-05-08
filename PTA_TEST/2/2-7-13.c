/*
本题要求统计给定整数M和N区间内素数的个数并对它们求和。

输入格式:
输入在一行中给出两个正整数M和N（1≤M≤N≤500）。

输出格式:
在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔
*/

// @Author:longyan
// @Date:2022/5/8

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int n);
int main(int argc, char const *argv[])
{
    int m, n;
    scanf("%d %d", &m, &n);
    // m = 10;
    // n = 31;

    int sum = 0;
    int cnt = 0;

    for (int i = m; i <= n; i++)
    {
        if (isPrime(i))
        {
            sum += i;
            cnt++;
        }
    }

    printf("%d %d", cnt, sum);

    return 0;
}

bool isPrime(int n)
{
    int i;
    if (n == 1)
        return false;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
