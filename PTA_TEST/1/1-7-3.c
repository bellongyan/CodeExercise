/*
本题要求编写程序，根据输入的三角形的三条边a、b、c，计算并输出面积和周长。注意：在一个三角形中， 任意两边之和大于第三边。三角形面积计算公式：area=sqrt(s(s−a)(s−b)(s−c))
​，其中s=(a+b+c)/2。

输入格式：
输入为3个正整数，分别代表三角形的3条边a、b、c。

输出格式：
如果输入的边能构成一个三角形，则在一行内，按照

area = 面积; perimeter = 周长

的格式输出，保留两位小数。否则，输出

These sides do not correspond to a valid triangle
*/

// Author:longyan
// Date:2022/4/15

#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool makeTriangle(double x, double y, double z);
double areaTriangle(double x, double y, double z);
double perimeterTriangle(double x, double y, double z);
int main()
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (makeTriangle(a, b, c))
    {
        printf("area = %.2lf; perimeter = %.2lf\n", areaTriangle(a, b, c), perimeterTriangle(a, b, c));
    }
    else
    {
        printf("These sides do not correspond to a valid triangle\n");
    }
    return 0;
}

bool makeTriangle(double x, double y, double z)
{
    if (x + y > z && y + z > x && x + z > y)
        return true;
    else
        return false;
}
double areaTriangle(double x, double y, double z)
{
    double area;
    double s = (x + y + z) / 2.0;
    double f = (s * (s - x) * (s - y) * (s - z));
    area = sqrt(f);
    return area;
}
double perimeterTriangle(double x, double y, double z)
{
    double perimeter;
    perimeter = (x + y + z);
    return perimeter;
}
