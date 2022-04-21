/*
假设个人所得税为：税率×(工资−1600)。请编写程序计算应缴的所得税，其中税率定义为：

当工资不超过1600时，税率为0；
当工资在区间(1600, 2500]时，税率为5%；
当工资在区间(2500, 3500]时，税率为10%；
当工资在区间(3500, 4500]时，税率为15%；
当工资超过4500时，税率为20%。
输入格式:
输入在一行中给出非负工资。

输出格式:
在一行输出个人所得税，精确到小数点后2位。
*/

// Author:longyan
// Date:2022/4/16

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int salary;
    double sum_tax;
    double tax_level_1600 = 0, tax_level_2500 = 0.05, tax_level_3500 = 0.10, tax_level_4500 = 0.15, tax_level_top = 0.20;
    scanf("%d", &salary);
    if (salary <= 1600)
    {
        sum_tax = salary * tax_level_1600;
    }
    else if (salary <= 2500)
    {
        sum_tax = 1600 * tax_level_1600 + (salary - 1600) * tax_level_2500;
    }
    else if (salary <= 3500)
    {
        // sum_tax = 1600 * tax_level_1600 + (2500 - 1600) * tax_level_2500 + (salary - 2500) * tax_level_3500;
        sum_tax = 1600 * tax_level_1600 + (salary - 1600) * tax_level_3500;
    }
    else if (salary <= 4500)
    {
        // sum_tax = 1600 * tax_level_1600 + (2500 - 1600) * tax_level_2500 + (3500 - 2500) * tax_level_3500 + (salary - 3500) * tax_level_4500;
        sum_tax = 1600 * tax_level_1600 + (salary - 1600) * tax_level_4500;
    }
    else
    {
        // sum_tax = 1600 * tax_level_1600 + (2500 - 1600) * tax_level_2500 + (3500 - 2500) * tax_level_3500 + (4500 - 3500) * tax_level_4500 + (salary - 4500) * tax_level_top;
        sum_tax = 1600 * tax_level_1600 + (salary - 1600) * tax_level_top;
    }

    printf("%.2lf\n", sum_tax);
    return 0;
}