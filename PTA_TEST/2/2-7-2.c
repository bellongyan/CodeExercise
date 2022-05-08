/*
本题要求编写程序，计算N的阶乘。

输入格式:
输入在一行中给出一个非负整数N（0≤N≤21）。

输出格式:
在一行中按照“product = F”的格式输出阶乘的值F，请注意等号的左右各有一个空格。题目保证计算结果不超过双精度范围。
*/

// @Author:longyan
// @Date:2022/5/7

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    double sum = 1;
    if (n == 0)
    {
        sum = 1;
    }
    else
    {
        for (int i = 1; i < n + 1; i++)
        {
            sum *= i;
        }
    }
    printf("product = %.lf\n", sum);
    return 0;
}