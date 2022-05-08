/*
本题要求编写程序，计算序列部分和 4∗(1−1/3+1/5−1/7+...) ，直到最后一项的绝对值小于给定精度eps。

输入格式:
输入在一行中给出一个正实数eps。

输出格式:
在一行中按照“Pi = pi”的格式输出部分和的值pi，精确到小数点后四位。题目保证输入数据和计算结果均不超过双精度范围。
*/

// @Author:longyan
// @Date:2022/5/7

#include <stdio.h>
#include <math.h>
// 此处的循环次数如果较少会影响计算精度
#define MAXN 1000000
int main()
{
    double sum = 0;
    double eps;
    scanf("%lf", &eps);
    int sign = -1;
    for (int i = 1; i < MAXN + 1; i++)
    {
        sum = sum + 4 * (pow(sign, i + 1) * 1.0 / (2 * i - 1));
        if (fabs(1.0 / (2 * i - 1)) < eps)
            break;
    }
    printf("Pi = %.4lf\n", sum);

    return 0;
}