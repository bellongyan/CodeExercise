/*
复数可以写成 (A+Bi) 的常规形式，其中 A 是实部，B 是虚部，i 是虚数单位，满足 i^2 =−1；也可以写成极坐标下的指数形式 (R×e^(Pi))，其中 R 是复数模，P 是辐角，i 是虚数单位，其等价于三角形式 R(cos(P)+isin(P))。

现给定两个复数的 R 和 P，要求输出两数乘积的常规形式。

输入格式：
输入在一行中依次给出两个复数的 R1, P1, R2, P2，数字间以空格分隔。

输出格式：
在一行中按照 A+Bi 的格式输出两数乘积的常规形式，实部和虚部均保留 2 位小数。注意：如果 B 是负数，则应该写成 A-|B|i 的形式。
*/

// @Author:longyan
// @Date:2022/7/28

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double r1, p1, r2, p2;
    cin >> r1 >> p1 >> r2 >> p2;

    double A = r1 * cos(p1) * r2 * cos(p2) - r1 * sin(p1) * r2 * sin(p2);
    double B = r1 * cos(p1) * r2 * sin(p2) + r2 * cos(p2) * r1 * sin(p1);

    if (A + 0.005 >= 0 && A < 0)
        printf("0.00");
    else
        printf("%.2f", A);

    if (B >= 0)
        printf("+%.2fi\n", B);
    else if (B + 0.005 >= 0 && B < 0)
        printf("+0.00i\n");
    else
        printf("%.2fi\n", B);
    return 0;
}
