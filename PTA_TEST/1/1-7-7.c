/*
已知铁路托运行李，从甲地到乙地，规定每张客标托运费计算方法是：
行李重量不超过10公斤时，每公斤1.3元，
超过10公斤不超过50公斤时，其超过10公斤部分每公斤1.8元，
超过50公斤不超过200公斤时，超过50部分每公斤2.4元，
超过200公斤时，其超过部分每公斤4.5元。请
编写程序，输入需要托运的货物重量，输出托运的费用。

输入格式:
输入行李重量weight，任意一个实数。

输出格式:
如果重量weight>=0,则输出行李费用.如果重量weight<0,则输出"Error!".
*/

// Author:longyan
// Date:2022/4/16

#include <stdio.h>
int main()
{
    double luggage_weight;
    int limit_level_10 = 10, limit_level_50 = 50, limit_level_200 = 200;
    double price_level_basic = 1.3, price_level_10 = 1.8, price_level_50 = 2.4, price_level_200 = 4.5;
    scanf("%lf", &luggage_weight);
    double price;
    if (luggage_weight < 0)
    {
        printf("Error!\n");
    }
    else
    {
        if (luggage_weight < limit_level_10)
        {
            price = price_level_basic * luggage_weight;
        }
        else if (luggage_weight < limit_level_50)
        {
            price = limit_level_10 * price_level_basic + (luggage_weight - limit_level_10) * price_level_10;
        }
        else if (luggage_weight < limit_level_200)
        {
            price = limit_level_10 * price_level_basic + (limit_level_50 - limit_level_10) * price_level_10 + (luggage_weight - limit_level_50) * price_level_50;
        }
        else
        {
            price = limit_level_10 * price_level_basic + (limit_level_50 - limit_level_10) * price_level_10 + (limit_level_200 - limit_level_50) * price_level_50 + (luggage_weight - limit_level_200) * price_level_200;
        }
        printf("%.2lf\n", price);
    }

    return 0;
}