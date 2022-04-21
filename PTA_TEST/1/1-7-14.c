/*
现在90号汽油6.95元/升、93号汽油7.44元/升、97号汽油7.93元/升。为吸引顾客，某自动加油站推出了“自助服务”和“协助服务”两个服务等级，分别可得到5%和3%的折扣。

本题要求编写程序，根据输入顾客的加油量a，汽油品种b（90、93或97）和服务类型c（m - 自助，e - 协助），计算并输出应付款。

输入格式：
输入在一行中给出两个整数和一个字符，分别表示顾客的加油量a，汽油品种b（90、93或97）和服务类型c（m - 自助，e - 协助）。

输出格式：
在一行中输出应付款额，保留小数点后2位。
*/

// Author:longyan
// Date:2022/4/15

#include <stdio.h>
int main(int argc, char const *argv[])
{
    double p90 = 6.95, p93 = 7.44, p97 = 7.93;
    char mode;
    int num, cata;

    double discount;
    double price;
    double p_price;

    scanf("%d%d\x20%c", &num, &cata, &mode);

    if (cata == 90)
        p_price = p90;
    else if (cata == 93)
        p_price = p93;
    else if (cata == 97)
        p_price = p97;

    if (mode == 'm')
        discount = 1 - 0.05;
    else if (mode == 'e')
        discount = 1 - 0.03;

    price = num * p_price * discount;

    printf("%.2lf\n", price);
    return 0;
}