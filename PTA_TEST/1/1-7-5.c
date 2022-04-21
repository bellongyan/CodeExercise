/*
本题目要求一元二次方程ax^2＋bx＋c＝0的根，结果保留2位小数。

输入格式:
输入在一行中给出3个浮点系数a、b、c，中间用空格分开。

输出格式:
根据系数情况，输出不同结果：

1)如果方程有两个不相等的实数根，则每行输出一个根，先大后小；

2)如果方程有两个不相等复数根，则每行按照格式“实部+虚部i”输出一个根，先输出虚部为正的，后输出虚部为负的；

3)如果方程只有一个根，则直接输出此根；

4)如果系数都为0，则输出"Zero Equation"；

5)如果a和b为0，c不为0，则输出"Not An Equation"。
*/

// Author:longyan
// Date:2022/4/15

#include <stdio.h>
#include <math.h>
void solveEquation(double a, double b, double c);
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    solveEquation(a, b, c);
    return 0;
}
void solveEquation(double a, double b, double c)
{
    double x1, x2;
    double delta = pow(b, 2) - 4 * a * c;
    if (delta >= 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        if (a == 0)
        {
            if (b == 0 && c == 0)
            {
                printf("Zero Equation");
            }
            else if (b == 0 && c != 0)
            {
                printf("Not An Equation");
            }
            else
            {
                printf("%.2lf", -c * 1.0 / b);
            }
        }
        else
        {
            if (delta > 0)
            {
                double temp;
                if (x1 < x2)
                {
                    temp = x2;
                    x2 = x1;
                    x1 = temp;
                }
                printf("%.2lf\n%.2lf", x1, x2);
            }
            else
            {
                printf("%.2lf", x1);
            }
        }
    }
    else
    {
        delta = -1.0 * delta;
        double x = sqrt(delta) / (2 * a);
        if (b == 0)
        {
            printf("0.00+%.2fi\n0.00-%.2fi", x, x);
        }
        else
        {
            printf("%.2f+%.2fi\n%.2f-%.2fi", -b * 1.0 / (2 * a), x, -b * 1.0 / (2 * a), x);
        }
    }
}
