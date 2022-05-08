/*
斐波那契数，亦称之为斐波那契数列，指的是这样一个数列：1、1、2、3、5、8、13、21、……，这个数列从第3项开始，每一项都等于前两项之和。求大于输入数的最小斐波那契数。

输入格式:
在一行输人一个正整数n(n>=10)。

输出格式:
在一行输出大于n的最小斐波那契数。
*/

// @Author:longyan
// @Date:2022/5/8

#include <stdio.h>
#define MAXN 10000
int main(int argc, char const *argv[])
{
    int fib[MAXN];
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i < MAXN; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    int n;
    scanf("%d", &n);
    for (int i = 0; i < MAXN; i++)
    {
        if (fib[i] > n)
        {
            printf("%d", fib[i]);
            break;
        }
    }
    return 0;
}
