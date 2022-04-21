/*
为了提倡居民节约用电，某省电力公司执行“阶梯电价”，安装一户一表的居民用户电价分为两个“阶梯”：月用电量50千瓦时（含50千瓦时）以内的，电价为0.53元/千瓦时；
超过50千瓦时的，超出部分的用电量，电价上调0.05元/千瓦时。请编写程序计算电费。

输入格式:
输入在一行中给出某用户的月用电量（单位：千瓦时）。

输出格式:
在一行中输出该用户应支付的电费（元），结果保留两位小数，格式如：“cost = 应付电费值”；若用电量小于0，则输出"Invalid Value!"。
*/

// Author:longyan
// Date:2022/4/15

#include <stdio.h>
int main()
{
    int e_count;
    double cost;
    int evelope = 50;
    scanf("%d", &e_count);
    if (e_count < 0)
    {
        printf("Invalid Value!");
    }
    else if (e_count <= evelope)
    {
        cost = 0.53 * e_count;
        printf("cost = %.2lf", cost);
    }
    else
    {
        cost = 50 * 0.53 + (e_count - evelope) * (0.53 + 0.05);
        printf("cost = %.2lf", cost);
    }

    return 0;
}
