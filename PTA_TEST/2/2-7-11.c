/*
本题要求编写程序，对输入的一个整数，从高位开始逐位分割并输出它的各位数字。

输入格式：
输入在一行中给出一个长整型范围内的非负整数。

输出格式：
从高位开始逐位输出该整数的各位数字，每个数字后面有一个空格。
*/

// @Author:longyan
// @Date:2022/5/8

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    int count = 1;
    int num[100];
    scanf("%d", &n);
    if (n < 10)
        num[count - 1] = n;
    while (n / 10 != 0)
    {
        int ret = n % 10;
        count++;
        num[count - 2] = ret;

        n = n / 10;
        if (n < 10)
            num[count - 1] = n;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }

    return 0;
}
