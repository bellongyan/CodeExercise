/*
真的是简单题哈 —— 给定两个绝对值不超过100的整数A和B，要求你按照“A/B=商”的格式输出结果。

输入格式：
输入在第一行给出两个整数A和B（−100≤A,B≤100），数字间以空格分隔。

输出格式：
在一行中输出结果：如果分母是正数，则输出“A/B=商”；如果分母是负数，则要用括号把分母括起来输出；如果分母为零，则输出的商应为Error。输出的商应保留小数点后2位。
*/

// Author:longyan
// Date:2022/4/18

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int number_A;
    int number_B;
    scanf("%d%d", &number_A, &number_B);
    if (number_B != 0)
    {
        double number_C = (number_A * 1.0) / (number_B * 1.0);
        if (number_B < 0)
        {
            printf("%d/(%d)=%.2lf", number_A, number_B, number_C);
        }
        else
        {
            printf("%d/%d=%.2lf", number_A, number_B, number_C);
        }
    }
    else
    {
        printf("%d/0=Error", number_A);
    }
    return 0;
}
